#
# Copyright (C) 2023 Xiaomi Corporation
#
# Licensed under the Apache License, Version 2.0 (the "License"); you may not
# use this file except in compliance with the License. You may obtain a copy of
# the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
# License for the specific language governing permissions and limitations under
# the License.
#

if(CONFIG_ANDROID_LIBHIDL)

  target_sources(
    android
    PRIVATE android/hidl/base/1.0/BaseAll.cpp
            android/hidl/manager/1.0/IServiceManager.cpp
            android/hidl/manager/1.1/IServiceManager.cpp
            android/hidl/manager/1.2/IServiceManager.cpp
            base/HidlSupport.cpp
            base/HidlInternal.cpp
            base/Status.cpp)

  set(HIDL_OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR})

  set_property(
    TARGET nuttx
    APPEND
    PROPERTY NUTTX_CXX_INCLUDE_DIRECTORIES
             ${CMAKE_CURRENT_LIST_DIR}/base/include ${HIDL_OUTPUT_DIR})

  target_include_directories(android PRIVATE ${HIDL_OUTPUT_DIR})

  add_custom_target(
    libhidl_hidl_out
    COMMAND ANDROID_BUILD_TOP=${NUTTX_APPS_DIR}/external/android
            ./update-makefiles.sh ${HIDL_OUTPUT_DIR} 2>&1
    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    COMMENT "HIDL:Gen HIDL LIBHIDL")

  add_dependencies(android libhidl_hidl_out)

endif()
