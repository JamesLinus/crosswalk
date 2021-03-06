// Copyright (c) 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef XWALK_APPLICATION_COMMON_ID_UTIL_H_
#define XWALK_APPLICATION_COMMON_ID_UTIL_H_

#include <string>

#include "xwalk/application/common/application_data.h"

namespace base {
class FilePath;
}

namespace xwalk {
namespace application {
// Generates an application ID from arbitrary input. The same input string will
// always generate the same output ID.
std::string GenerateId(const std::string& input);

// Generate an ID for an application in the given path.
// Used while developing applications, before they have a key.
std::string GenerateIdForPath(const base::FilePath& path);

// Checks to see if the application has a valid ID.
bool IsValidApplicationID(const std::string& id);

#if defined(OS_TIZEN)
std::string GetPackageIdFromAppId(const std::string& app_id);
bool IsValidWGTID(const std::string& id);
bool IsValidXPKID(const std::string& id);
#endif

}  // namespace application
}  // namespace xwalk

#endif  // XWALK_APPLICATION_COMMON_ID_UTIL_H_
