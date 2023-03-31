#include <android/hidl/base/1.0/IBase.h>

namespace android {
namespace hidl {
namespace base {
namespace V1_0 {
    const char *IBase::descriptor("android.hidl.base@1.0::IBase");

    ::android::hardware::Return<void> IBase::interfaceChain(interfaceChain_cb _hidl_cb) {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<void> IBase::debug(const ::android::hardware::hidl_handle &fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string> &options) {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<void> IBase::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<void> IBase::getHashChain(getHashChain_cb _hidl_cb) {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<void> IBase::setHALInstrumentation() {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<bool> IBase::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient> &recipient, uint64_t cookie) {
        return false;
    }

    ::android::hardware::Return<void> IBase::ping() {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<void> IBase::getDebugInfo(getDebugInfo_cb _hidl_cb) {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<void> IBase::notifySyspropsChanged() {
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<bool> IBase::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient> &recipient) {
        return false;
    }

}  // namespace V1_0
}  // namespace base
}  // namespace hidl
}  // namespace android
