/*
 * Copyright (C) 2018 The Android Open Source Project
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

#ifndef ANDROID_FRAMEWORKS_BUFFERHUB_V1_0_BUFFER_HUB_SERVICE_H
#define ANDROID_FRAMEWORKS_BUFFERHUB_V1_0_BUFFER_HUB_SERVICE_H

#include <android/frameworks/bufferhub/1.0/IBufferClient.h>
#include <android/frameworks/bufferhub/1.0/IBufferHub.h>

namespace android {
namespace frameworks {
namespace bufferhub {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_handle;
using ::android::hardware::Return;
using ::android::hardware::graphics::common::V1_2::HardwareBufferDescription;

class BufferHubService : public IBufferHub {
public:
    Return<void> allocateBuffer(const HardwareBufferDescription& description,
                                const uint32_t userMetadataSize,
                                allocateBuffer_cb _hidl_cb) override;
    Return<void> importBuffer(const hidl_handle& nativeHandle, importBuffer_cb _hidl_cb) override;
};

} // namespace implementation
} // namespace V1_0
} // namespace bufferhub
} // namespace frameworks
} // namespace android

#endif // ANDROID_FRAMEWORKS_BUFFERHUB_V1_0_BUFFER_HUB_SERVICE_H
