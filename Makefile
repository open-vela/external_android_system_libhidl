#
# Copyright (C) 2023 Xiaomi Corporation
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

include $(APPDIR)/Make.defs

CXXEXT = .cpp

CXXSRCS += android/hidl/base/1.0/BaseAll.cpp
CXXSRCS += android/hidl/manager/1.0/IServiceManager.cpp
CXXSRCS += android/hidl/manager/1.1/IServiceManager.cpp
CXXSRCS += android/hidl/manager/1.2/IServiceManager.cpp
CXXSRCS += base/HidlSupport.cpp
CXXSRCS += base/HidlInternal.cpp
CXXSRCS += base/Status.cpp


ANDROID_BUILD_TOP=$(CURDIR)/../../
context::
	-ANDROID_BUILD_TOP=$(ANDROID_BUILD_TOP) ./update-makefiles.sh 2>&1

distclean::
	$(call DELDIR, base/include/android/)

include $(APPDIR)/Application.mk
