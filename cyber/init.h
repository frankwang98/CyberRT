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

#ifndef CYBER_INIT_H_
#define CYBER_INIT_H_

#include "cyber/common/log.h"
#include "cyber/state.h"

namespace apollo {
namespace cyber {

/**
 * @brief init cyber
 * @param binary_name 
 * @return true 
 * @return false 
 */
bool Init(const char* binary_name);

/**
 * @brief clear state
 */
void Clear();

}  // namespace cyber
}  // namespace apollo

#endif  // CYBER_INIT_H_
