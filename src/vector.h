/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <cstdint>
#include <fstream>
#include "real.h"

class Matrix;

class Vector {

  public:
    int64_t m_;
    real* data_;

    explicit Vector(int64_t);
    ~Vector();

    real& operator[](int64_t);
    const real& operator[](int64_t) const;

    void writeToStream(std::wostream&);

    void zero();
    void mul(real);
    void addRow(const Matrix&, int64_t);
    void addRow(const Matrix&, int64_t, real);
    void mul(const Matrix&, const Vector&);
    int64_t argmax();
};

#endif
