/*!
 *  Copyright (c) 2015 by Contributors
 * \file narray.h
 * \brief operator interface of mxnet
 */
#ifndef MXNET_NARRAY_H_
#define MXNET_NARRAY_H_
#include <dmlc/base.h>
#include <mshadow/tensor.h>
#include "./base.h"

namespace mxnet {


/*!
 * \brief ndarray interface, reuse mshadow::TBlob
 *    for storage layer
 */
class NArray {
 public:
  // default copy/move constructor will be OK
  NArray() {}
  ~NArray() {

  }
  
 private:
  /*! \brief memory content */
  mshadow::TBlob data_;
  /*! \brief internal dag id of the NArray */
  node_index_t dag_id_;
  /*!
   * \brief internal reference counter
   */
  RefCounter ref_counter_;
};
}  // namespace mxnet
#endif  // MXNET_NARRAY_H_
