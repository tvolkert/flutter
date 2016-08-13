// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FLUTTER_FLOW_BITMAP_IMAGE_H_
#define FLUTTER_FLOW_BITMAP_IMAGE_H_

#include "third_party/skia/include/core/SkImage.h"
#include "third_party/skia/include/core/SkImageGenerator.h"

namespace flow {

sk_sp<SkImage> BitmapImageCreate(SkImageGenerator& generator);

}  // namespace flow

#endif  // FLUTTER_FLOW_BITMAP_IMAGE_H_
