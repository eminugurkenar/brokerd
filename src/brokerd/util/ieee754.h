/**
 * This file is part of the "FnordMetric" project
 *   Copyright (c) 2014 Paul Asmuth, Google Inc.
 *   Copyright (c) 2016 Paul Asmuth, FnordCorp B.V.
 *
 * FnordMetric is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#ifndef _libstx_UTIL_IEEE754_H_
#define _libstx_UTIL_IEEE754_H_

#include <stdlib.h>
#include <stdint.h>
#include <string>

class IEEE754 {
public:

  static uint64_t toBytes(double value);
  static double fromBytes(uint64_t bytes);

};

#endif
