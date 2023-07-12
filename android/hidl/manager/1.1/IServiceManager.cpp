/*
 * Copyright (C) 2023 Xiaomi Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <android/hidl/manager/1.1/IServiceManager.h>

namespace android {
namespace hidl {
namespace manager {
namespace V1_1 {
    using interfaceChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& descriptors)>;
    ::android::hardware::Return<void> IServiceManager::interfaceChain(interfaceChain_cb _hidl_cb) {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) {
        return ::android::hardware::Void();
    }

    using interfaceDescriptor_cb = std::function<void(const ::android::hardware::hidl_string& descriptor)>;
    ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) {
        return ::android::hardware::Void();
    }

    using getHashChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_array<uint8_t, 32>>& hashchain)>;
    ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<void> setHALInstrumentation() {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) {
        return false;
    }

    ::android::hardware::Return<void> ping() {
        return ::android::hardware::Void();
    }

    using getDebugInfo_cb = std::function<void(const ::android::hidl::base::V1_0::DebugInfo& info)>;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<void> notifySyspropsChanged() {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) {
        return false;
    }
}  // namespace V1_1
}  // namespace manager
}  // namespace hidl
}  // namespace android
