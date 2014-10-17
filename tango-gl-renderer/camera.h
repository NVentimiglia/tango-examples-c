/*
 * Copyright 2014 Google Inc. All Rights Reserved.
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

#ifndef CAMERA_H
#define CAMERA_H

#include "gl_util.h"
#include "transform.h"

class Camera : public Transform{
 public:
  Camera();
  ~Camera();

  void SetAspectRatio(float aspect_ratio);
  void SetFieldOfView(float fov);

  glm::mat4 GetViewMatrix();
  glm::mat4 GetProjectionMatrix();
 private:
  float field_of_view_;
  float aspect_ratio_;
  float near_clip_plane_, far_clip_plane_;
};

#endif  // CAMERA_H
