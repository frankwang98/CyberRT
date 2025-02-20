/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef CYBER_BINARY_H_
#define CYBER_BINARY_H_

#include <string>

namespace apollo {
namespace cyber {
namespace binary {

/** 经典的 get 和 set **/
/**
 * @brief Get the Name object
 * @return std::string 
 */
std::string GetName();

/**
 * @brief Set the Name object
 * @param name 
 */
void SetName(const std::string& name);
}  // namespace binary
}  // namespace cyber
}  // namespace apollo

#endif  // CYBER_BINARY_H_
