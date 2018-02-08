/*
 * Licensed to the Mosaic5G under one or more contributor license
 * agreements. See the NOTICE file distributed with this
 * work for additional information regarding copyright ownership.
 * The Mosaic5G licenses this file to You under the
 * Apache License, Version 2.0  (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  	http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the Mosaic5G:
 *  	contact@mosaic5g.io
 */

/*!
  \file
  \brief
  \author
  \company
  \email:
*/

#ifndef __TASK_H__
#define __TASK_H__

#include <thread>
#include "rt_wrapper.h"

namespace llmec {
  namespace core {
    namespace rt {
      enum class Policy {RR = SCHED_RR, DEADLINE = SCHED_DEADLINE, FIFO = SCHED_FIFO};
      class Task {
        public:
          Task(Policy pol) {
            set_scheduling_policy(pol);
          }
          virtual void run()=0;
          int apply_scheduling_policy();
        protected:
          struct sched_attr sched_attr_;
        private:
          void set_scheduling_policy(Policy pol);
      };
    }
  }
}
#endif
