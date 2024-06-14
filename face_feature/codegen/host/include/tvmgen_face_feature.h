#ifndef TVMGEN_FACE_FEATURE_H_
#define TVMGEN_FACE_FEATURE_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor x size (in bytes) for TVM module "face_feature" 
 */
#define TVMGEN_FACE_FEATURE_X_SIZE 82006192
/*!
 * \brief Output tensor output size (in bytes) for TVM module "face_feature" 
 */
#define TVMGEN_FACE_FEATURE_OUTPUT_SIZE 63294480
/*!
 * \brief Input tensor pointers for TVM module "face_feature" 
 */
struct tvmgen_face_feature_inputs {
  void* x;
};

/*!
 * \brief Output tensor pointers for TVM module "face_feature" 
 */
struct tvmgen_face_feature_outputs {
  void* output;
};

/*!
 * \brief entrypoint function for TVM module "face_feature"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_face_feature_run(
  struct tvmgen_face_feature_inputs* inputs,
  struct tvmgen_face_feature_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "face_feature" 
 */
#define TVMGEN_FACE_FEATURE_WORKSPACE_SIZE 3211264

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_FACE_FEATURE_H_
