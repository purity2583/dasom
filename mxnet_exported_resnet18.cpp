

#include "vta/runtime.h"
#include "VTABundle.h"
#include <time.h>
#include <iostream>
#include <fstream>
#include "mxnet_exported_resnet18.h"
SymbolTableEntry symbolTableEntry_mxnet_exported_resnet18[2]={{"data",0,150528,'1'},{"resnetv10_dense0_fwd__1",602112,1000,'1'}};
BundleConfig mxnet_exported_resnet18_config = {12934560, 606112, 0, 64, 2, symbolTableEntry_mxnet_exported_resnet18};
namespace namespace_mxnet_exported_resnet18 {
int8_t* broadcast__defaultpreprocess0_init_mean_tile2__2_constfold;
int8_t* broadcast__defaultpreprocess0_init_scale_tile2__2_constfold;
int8_t* resnetv10_conv0_weight__1;
int8_t* conv_bias__20;
int8_t* resnetv10_stage1_conv0_weight__1;
int8_t* conv_bias__21;
int8_t* resnetv10_stage1_conv1_weight__1;
int8_t* conv_bias__22;
int8_t* resnetv10_stage1_conv2_weight__1;
int8_t* conv_bias__23;
int8_t* resnetv10_stage1_conv3_weight__1;
int8_t* conv_bias;
int8_t* resnetv10_stage2_conv2_weight__1;
int8_t* conv_bias__24;
int8_t* resnetv10_stage2_conv0_weight__1;
int8_t* conv_bias__25;
int8_t* resnetv10_stage2_conv1_weight__1;
int8_t* conv_bias__26;
int8_t* resnetv10_stage2_conv3_weight__1;
int8_t* conv_bias__27;
int8_t* resnetv10_stage2_conv4_weight__1;
int8_t* conv_bias__5;
int8_t* resnetv10_stage3_conv2_weight__1;
int8_t* conv_bias__28;
int8_t* resnetv10_stage3_conv0_weight__1;
int8_t* conv_bias__29;
int8_t* resnetv10_stage3_conv1_weight__1;
int8_t* conv_bias__30;
int8_t* resnetv10_stage3_conv3_weight__1;
int8_t* conv_bias__31;
int8_t* resnetv10_stage3_conv4_weight__1;
int8_t* conv_bias__10;
int8_t* resnetv10_stage4_conv2_weight__1;
int8_t* conv_bias__32;
int8_t* resnetv10_stage4_conv0_weight__1;
int8_t* conv_bias__33;
int8_t* resnetv10_stage4_conv1_weight__1;
int8_t* conv_bias__34;
int8_t* resnetv10_stage4_conv3_weight__1;
int8_t* conv_bias__35;
int8_t* resnetv10_stage4_conv4_weight__1;
int8_t* conv_bias__15;
int8_t* resnetv10_dense0_weight__1;
int8_t* resnetv10_dense0_bias;
}
using namespace namespace_mxnet_exported_resnet18;
extern VTACommandHandle vtaCmdH;

void mxnet_exported_resnet18_load_module(uint8_t *constantWeight){
  broadcast__defaultpreprocess0_init_mean_tile2__2_constfold = (int8_t *)VTABufferAlloc(602112);
  VTABufferCopy((int8_t *)(constantWeight + 0), 0, broadcast__defaultpreprocess0_init_mean_tile2__2_constfold, 0, 602112, 1);
  broadcast__defaultpreprocess0_init_scale_tile2__2_constfold = (int8_t *)VTABufferAlloc(602112);
  VTABufferCopy((int8_t *)(constantWeight + 602112), 0, broadcast__defaultpreprocess0_init_scale_tile2__2_constfold, 0, 602112, 1);
  resnetv10_conv0_weight__1 = (int8_t *)VTABufferAlloc(37632);
  VTABufferCopy((int8_t *)(constantWeight + 1204224), 0, resnetv10_conv0_weight__1, 0, 37632, 1);
  conv_bias__20 = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 1241856), 0, conv_bias__20, 0, 256, 1);
  resnetv10_stage1_conv0_weight__1 = (int8_t *)VTABufferAlloc(36864);
  VTABufferCopy((int8_t *)(constantWeight + 1242112), 0, resnetv10_stage1_conv0_weight__1, 0, 36864, 1);
  conv_bias__21 = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 1278976), 0, conv_bias__21, 0, 256, 1);
  resnetv10_stage1_conv1_weight__1 = (int8_t *)VTABufferAlloc(36864);
  VTABufferCopy((int8_t *)(constantWeight + 1279232), 0, resnetv10_stage1_conv1_weight__1, 0, 36864, 1);
  conv_bias__22 = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 1316096), 0, conv_bias__22, 0, 256, 1);
  resnetv10_stage1_conv2_weight__1 = (int8_t *)VTABufferAlloc(36864);
  VTABufferCopy((int8_t *)(constantWeight + 1316352), 0, resnetv10_stage1_conv2_weight__1, 0, 36864, 1);
  conv_bias__23 = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 1353216), 0, conv_bias__23, 0, 256, 1);
  resnetv10_stage1_conv3_weight__1 = (int8_t *)VTABufferAlloc(36864);
  VTABufferCopy((int8_t *)(constantWeight + 1353472), 0, resnetv10_stage1_conv3_weight__1, 0, 36864, 1);
  conv_bias = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 1390336), 0, conv_bias, 0, 256, 1);
  resnetv10_stage2_conv2_weight__1 = (int8_t *)VTABufferAlloc(8192);
  VTABufferCopy((int8_t *)(constantWeight + 1390592), 0, resnetv10_stage2_conv2_weight__1, 0, 8192, 1);
  conv_bias__24 = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 1398784), 0, conv_bias__24, 0, 512, 1);
  resnetv10_stage2_conv0_weight__1 = (int8_t *)VTABufferAlloc(73728);
  VTABufferCopy((int8_t *)(constantWeight + 1399296), 0, resnetv10_stage2_conv0_weight__1, 0, 73728, 1);
  conv_bias__25 = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 1473024), 0, conv_bias__25, 0, 512, 1);
  resnetv10_stage2_conv1_weight__1 = (int8_t *)VTABufferAlloc(147456);
  VTABufferCopy((int8_t *)(constantWeight + 1473536), 0, resnetv10_stage2_conv1_weight__1, 0, 147456, 1);
  conv_bias__26 = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 1620992), 0, conv_bias__26, 0, 512, 1);
  resnetv10_stage2_conv3_weight__1 = (int8_t *)VTABufferAlloc(147456);
  VTABufferCopy((int8_t *)(constantWeight + 1621504), 0, resnetv10_stage2_conv3_weight__1, 0, 147456, 1);
  conv_bias__27 = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 1768960), 0, conv_bias__27, 0, 512, 1);
  resnetv10_stage2_conv4_weight__1 = (int8_t *)VTABufferAlloc(147456);
  VTABufferCopy((int8_t *)(constantWeight + 1769472), 0, resnetv10_stage2_conv4_weight__1, 0, 147456, 1);
  conv_bias__5 = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 1916928), 0, conv_bias__5, 0, 512, 1);
  resnetv10_stage3_conv2_weight__1 = (int8_t *)VTABufferAlloc(32768);
  VTABufferCopy((int8_t *)(constantWeight + 1917440), 0, resnetv10_stage3_conv2_weight__1, 0, 32768, 1);
  conv_bias__28 = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 1950208), 0, conv_bias__28, 0, 1024, 1);
  resnetv10_stage3_conv0_weight__1 = (int8_t *)VTABufferAlloc(294912);
  VTABufferCopy((int8_t *)(constantWeight + 1951232), 0, resnetv10_stage3_conv0_weight__1, 0, 294912, 1);
  conv_bias__29 = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 2246144), 0, conv_bias__29, 0, 1024, 1);
  resnetv10_stage3_conv1_weight__1 = (int8_t *)VTABufferAlloc(589824);
  VTABufferCopy((int8_t *)(constantWeight + 2247168), 0, resnetv10_stage3_conv1_weight__1, 0, 589824, 1);
  conv_bias__30 = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 2836992), 0, conv_bias__30, 0, 1024, 1);
  resnetv10_stage3_conv3_weight__1 = (int8_t *)VTABufferAlloc(589824);
  VTABufferCopy((int8_t *)(constantWeight + 2838016), 0, resnetv10_stage3_conv3_weight__1, 0, 589824, 1);
  conv_bias__31 = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 3427840), 0, conv_bias__31, 0, 1024, 1);
  resnetv10_stage3_conv4_weight__1 = (int8_t *)VTABufferAlloc(589824);
  VTABufferCopy((int8_t *)(constantWeight + 3428864), 0, resnetv10_stage3_conv4_weight__1, 0, 589824, 1);
  conv_bias__10 = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 4018688), 0, conv_bias__10, 0, 1024, 1);
  resnetv10_stage4_conv2_weight__1 = (int8_t *)VTABufferAlloc(131072);
  VTABufferCopy((int8_t *)(constantWeight + 4019712), 0, resnetv10_stage4_conv2_weight__1, 0, 131072, 1);
  conv_bias__32 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 4150784), 0, conv_bias__32, 0, 2048, 1);
  resnetv10_stage4_conv0_weight__1 = (int8_t *)VTABufferAlloc(1179648);
  VTABufferCopy((int8_t *)(constantWeight + 4152832), 0, resnetv10_stage4_conv0_weight__1, 0, 1179648, 1);
  conv_bias__33 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 5332480), 0, conv_bias__33, 0, 2048, 1);
  resnetv10_stage4_conv1_weight__1 = (int8_t *)VTABufferAlloc(2359296);
  VTABufferCopy((int8_t *)(constantWeight + 5334528), 0, resnetv10_stage4_conv1_weight__1, 0, 2359296, 1);
  conv_bias__34 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 7693824), 0, conv_bias__34, 0, 2048, 1);
  resnetv10_stage4_conv3_weight__1 = (int8_t *)VTABufferAlloc(2359296);
  VTABufferCopy((int8_t *)(constantWeight + 7695872), 0, resnetv10_stage4_conv3_weight__1, 0, 2359296, 1);
  conv_bias__35 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 10055168), 0, conv_bias__35, 0, 2048, 1);
  resnetv10_stage4_conv4_weight__1 = (int8_t *)VTABufferAlloc(2359296);
  VTABufferCopy((int8_t *)(constantWeight + 10057216), 0, resnetv10_stage4_conv4_weight__1, 0, 2359296, 1);
  conv_bias__15 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 12416512), 0, conv_bias__15, 0, 2048, 1);
  resnetv10_dense0_weight__1 = (int8_t *)VTABufferAlloc(512000);
  VTABufferCopy((int8_t *)(constantWeight + 12418560), 0, resnetv10_dense0_weight__1, 0, 512000, 1);
  resnetv10_dense0_bias = (int8_t *)VTABufferAlloc(4000);
  VTABufferCopy((int8_t *)(constantWeight + 12930560), 0, resnetv10_dense0_bias, 0, 4000, 1);
}

void mxnet_exported_resnet18_destroy_module(){
  VTABufferFree(broadcast__defaultpreprocess0_init_mean_tile2__2_constfold);
  VTABufferFree(broadcast__defaultpreprocess0_init_scale_tile2__2_constfold);
  VTABufferFree(resnetv10_conv0_weight__1);
  VTABufferFree(conv_bias__20);
  VTABufferFree(resnetv10_stage1_conv0_weight__1);
  VTABufferFree(conv_bias__21);
  VTABufferFree(resnetv10_stage1_conv1_weight__1);
  VTABufferFree(conv_bias__22);
  VTABufferFree(resnetv10_stage1_conv2_weight__1);
  VTABufferFree(conv_bias__23);
  VTABufferFree(resnetv10_stage1_conv3_weight__1);
  VTABufferFree(conv_bias);
  VTABufferFree(resnetv10_stage2_conv2_weight__1);
  VTABufferFree(conv_bias__24);
  VTABufferFree(resnetv10_stage2_conv0_weight__1);
  VTABufferFree(conv_bias__25);
  VTABufferFree(resnetv10_stage2_conv1_weight__1);
  VTABufferFree(conv_bias__26);
  VTABufferFree(resnetv10_stage2_conv3_weight__1);
  VTABufferFree(conv_bias__27);
  VTABufferFree(resnetv10_stage2_conv4_weight__1);
  VTABufferFree(conv_bias__5);
  VTABufferFree(resnetv10_stage3_conv2_weight__1);
  VTABufferFree(conv_bias__28);
  VTABufferFree(resnetv10_stage3_conv0_weight__1);
  VTABufferFree(conv_bias__29);
  VTABufferFree(resnetv10_stage3_conv1_weight__1);
  VTABufferFree(conv_bias__30);
  VTABufferFree(resnetv10_stage3_conv3_weight__1);
  VTABufferFree(conv_bias__31);
  VTABufferFree(resnetv10_stage3_conv4_weight__1);
  VTABufferFree(conv_bias__10);
  VTABufferFree(resnetv10_stage4_conv2_weight__1);
  VTABufferFree(conv_bias__32);
  VTABufferFree(resnetv10_stage4_conv0_weight__1);
  VTABufferFree(conv_bias__33);
  VTABufferFree(resnetv10_stage4_conv1_weight__1);
  VTABufferFree(conv_bias__34);
  VTABufferFree(resnetv10_stage4_conv3_weight__1);
  VTABufferFree(conv_bias__35);
  VTABufferFree(resnetv10_stage4_conv4_weight__1);
  VTABufferFree(conv_bias__15);
  VTABufferFree(resnetv10_dense0_weight__1);
  VTABufferFree(resnetv10_dense0_bias);
}
int mxnet_exported_resnet18(uint8_t *constantWeight, uint8_t *mutableWeight, uint8_t *activations){

  //Run allocactivation : _defaultpreprocess0_broadcast_minus0_res
  int8_t *_defaultpreprocess0_broadcast_minus0_res = (int8_t *)malloc(602112);

  //Run elementsub : _defaultpreprocess0_broadcast_minus0
  int8_t* data = (int8_t*)mutableWeight + 0;
  elemsub_f32(data, 1.0/1, 0, (int8_t *)VTABufferGetVirtAddr(broadcast__defaultpreprocess0_init_mean_tile2__2_constfold), 1.0/1, 0, _defaultpreprocess0_broadcast_minus0_res, 1.0/1, 0, 150528 );

  //Run elementdiv : _defaultpreprocess0_broadcast_div0
  elemdiv_f32(_defaultpreprocess0_broadcast_minus0_res, 1.0/1, 0, (int8_t *)VTABufferGetVirtAddr(broadcast__defaultpreprocess0_init_scale_tile2__2_constfold), 1.0/1, 0, _defaultpreprocess0_broadcast_minus0_res, 1.0/1, 0, 150528 );

  //Run allocactivation : resnetv10_conv0_fwd__2_res
  int8_t *resnetv10_conv0_fwd__2_res = (int8_t *)malloc(3211264);

  //Run convolution : resnetv10_conv0_fwd__2
  convolutionFloat(_defaultpreprocess0_broadcast_minus0_res, (int8_t*)VTABufferGetVirtAddr(resnetv10_conv0_weight__1), (int8_t *)VTABufferGetVirtAddr(conv_bias__20), resnetv10_conv0_fwd__2_res, 1, 224, 224, 3, 64, 7, 7, 3, 2, 1, 1, 1, 1, 112, 112 );

  //Run deallocactivation : dealloc__defaultpreprocess0_broadcast_minus0_res
  free(_defaultpreprocess0_broadcast_minus0_res);

  //Run allocactivation : resnetv10_pool0_fwd__1_quantize_res
  int8_t *resnetv10_pool0_fwd__1_quantize_res = (int8_t *)malloc(802816);

  //Run quantize : resnetv10_pool0_fwd__1_quantize
  quantize(resnetv10_conv0_fwd__2_res, resnetv10_pool0_fwd__1_quantize_res, 802816, 1/32.000000, 0 );

  //Run deallocactivation : dealloc_resnetv10_conv0_fwd__2_res
  free(resnetv10_conv0_fwd__2_res);

  //Run allocactivation : resnetv10_pool0_fwd__1_res
  int8_t *resnetv10_pool0_fwd__1_res = (int8_t *)malloc(200704);

  //Run maxpool : resnetv10_pool0_fwd__2
  maxpool(resnetv10_pool0_fwd__1_quantize_res, resnetv10_pool0_fwd__1_res, 1, 112, 112, 64, 3, 3, 1, 2 );

  //Run deallocactivation : dealloc_resnetv10_pool0_fwd__1_quantize_res
  free(resnetv10_pool0_fwd__1_quantize_res);

  //Run allocactivation : resnetv10_stage1_conv0_fwd__2_res
  int8_t *resnetv10_stage1_conv0_fwd__2_res = (int8_t *)malloc(200704);

  //Run convolution : resnetv10_stage1_conv0_fwd__2
  int8_t* resnetv10_stage1_conv0_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(200704);
  transpose_nhwc2vtaio(resnetv10_pool0_fwd__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage1_conv0_fwd__2_input_transpose), 1, 56, 56, 64);
  int8_t* resnetv10_stage1_conv0_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(200704);
  convolution_wo_tr(resnetv10_stage1_conv0_fwd__2_input_transpose, resnetv10_stage1_conv0_weight__1, (int32_t *)conv_bias__21, resnetv10_stage1_conv0_fwd__2_output_bef_transpose, 1, 56, 56, 64, 64, 3, 3, 1, 1, 1, 1, 7, 56, 56, vtaCmdH, 2, 8, 56, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage1_conv0_fwd__2_output_bef_transpose), resnetv10_stage1_conv0_fwd__2_res, 1, 56, 56, 64 );
  VTABufferFree(resnetv10_stage1_conv0_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage1_conv0_fwd__2_output_bef_transpose);

  //Run allocactivation : resnetv10_stage1__plus1__1_res
  int8_t *resnetv10_stage1__plus1__1_res = (int8_t *)malloc(200704);

  //Run convolution : resnetv10_stage1_conv1_fwd__2
  int8_t* resnetv10_stage1_conv1_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(200704);
  transpose_nhwc2vtaio(resnetv10_stage1_conv0_fwd__2_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage1_conv1_fwd__2_input_transpose), 1, 56, 56, 64);
  int8_t* resnetv10_stage1_conv1_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(200704);
  convolution_wo_tr(resnetv10_stage1_conv1_fwd__2_input_transpose, resnetv10_stage1_conv1_weight__1, (int32_t *)conv_bias__22, resnetv10_stage1_conv1_fwd__2_output_bef_transpose, 1, 56, 56, 64, 64, 3, 3, 1, 1, 0, 1, 7, 56, 56, vtaCmdH, 2, 8, 56, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage1_conv1_fwd__2_output_bef_transpose), resnetv10_stage1__plus1__1_res, 1, 56, 56, 64 );
  VTABufferFree(resnetv10_stage1_conv1_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage1_conv1_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage1_conv0_fwd__2_res
  free(resnetv10_stage1_conv0_fwd__2_res);

  //Run elementadd : resnetv10_stage1__plus0__1
  elemadd(resnetv10_pool0_fwd__1_res, 1.0/32.000000, 0, resnetv10_stage1__plus1__1_res, 1.0/16.000000, 0, resnetv10_stage1__plus1__1_res, 1.0/16.000000, 0, 200704 );

  //Run deallocactivation : dealloc_resnetv10_pool0_fwd__1_res
  free(resnetv10_pool0_fwd__1_res);

  //Run relu : resnetv10_stage1_activation0__1
  relu(resnetv10_stage1__plus1__1_res, resnetv10_stage1__plus1__1_res, 200704 );

  //Run allocactivation : resnetv10_stage1_conv2_fwd__2_res
  int8_t *resnetv10_stage1_conv2_fwd__2_res = (int8_t *)malloc(200704);

  //Run convolution : resnetv10_stage1_conv2_fwd__2
  int8_t* resnetv10_stage1_conv2_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(200704);
  transpose_nhwc2vtaio(resnetv10_stage1__plus1__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage1_conv2_fwd__2_input_transpose), 1, 56, 56, 64);
  int8_t* resnetv10_stage1_conv2_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(200704);
  convolution_wo_tr(resnetv10_stage1_conv2_fwd__2_input_transpose, resnetv10_stage1_conv2_weight__1, (int32_t *)conv_bias__23, resnetv10_stage1_conv2_fwd__2_output_bef_transpose, 1, 56, 56, 64, 64, 3, 3, 1, 1, 1, 1, 7, 56, 56, vtaCmdH, 2, 8, 56, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage1_conv2_fwd__2_output_bef_transpose), resnetv10_stage1_conv2_fwd__2_res, 1, 56, 56, 64 );
  VTABufferFree(resnetv10_stage1_conv2_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage1_conv2_fwd__2_output_bef_transpose);

  //Run allocactivation : resnetv10_stage1_conv3_fwd__2_res
  int8_t *resnetv10_stage1_conv3_fwd__2_res = (int8_t *)malloc(200704);

  //Run convolution : resnetv10_stage1_conv3_fwd__2
  int8_t* resnetv10_stage1_conv3_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(200704);
  transpose_nhwc2vtaio(resnetv10_stage1_conv2_fwd__2_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage1_conv3_fwd__2_input_transpose), 1, 56, 56, 64);
  int8_t* resnetv10_stage1_conv3_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(200704);
  convolution_wo_tr(resnetv10_stage1_conv3_fwd__2_input_transpose, resnetv10_stage1_conv3_weight__1, (int32_t *)conv_bias, resnetv10_stage1_conv3_fwd__2_output_bef_transpose, 1, 56, 56, 64, 64, 3, 3, 1, 1, 0, 1, 8, 56, 56, vtaCmdH, 2, 8, 56, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage1_conv3_fwd__2_output_bef_transpose), resnetv10_stage1_conv3_fwd__2_res, 1, 56, 56, 64 );
  VTABufferFree(resnetv10_stage1_conv3_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage1_conv3_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage1_conv2_fwd__2_res
  free(resnetv10_stage1_conv2_fwd__2_res);

  //Run elementadd : resnetv10_stage1__plus1__1
  elemadd(resnetv10_stage1__plus1__1_res, 1.0/16.000000, 0, resnetv10_stage1_conv3_fwd__2_res, 1.0/16.000000, 0, resnetv10_stage1__plus1__1_res, 1.0/16.000000, 0, 200704 );

  //Run deallocactivation : dealloc_resnetv10_stage1_conv3_fwd__2_res
  free(resnetv10_stage1_conv3_fwd__2_res);

  //Run relu : resnetv10_stage1_activation1__1
  relu(resnetv10_stage1__plus1__1_res, resnetv10_stage1__plus1__1_res, 200704 );

  //Run allocactivation : resnetv10_stage2_conv2_fwd__2_res
  int8_t *resnetv10_stage2_conv2_fwd__2_res = (int8_t *)malloc(100352);

  //Run convolution : resnetv10_stage2_conv2_fwd__2
  int8_t* resnetv10_stage2_conv2_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(200704);
  transpose_nhwc2vtaio(resnetv10_stage1__plus1__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage2_conv2_fwd__2_input_transpose), 1, 56, 56, 64);
  int8_t* resnetv10_stage2_conv2_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(100352);
  convolution_wo_tr(resnetv10_stage2_conv2_fwd__2_input_transpose, resnetv10_stage2_conv2_weight__1, (int32_t *)conv_bias__24, resnetv10_stage2_conv2_fwd__2_output_bef_transpose, 1, 56, 56, 64, 128, 1, 1, 0, 2, 0, 1, 5, 28, 28, vtaCmdH, 2, 7, 28, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage2_conv2_fwd__2_output_bef_transpose), resnetv10_stage2_conv2_fwd__2_res, 1, 28, 28, 128 );
  VTABufferFree(resnetv10_stage2_conv2_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage2_conv2_fwd__2_output_bef_transpose);

  //Run allocactivation : resnetv10_stage2_conv0_fwd__2_res
  int8_t *resnetv10_stage2_conv0_fwd__2_res = (int8_t *)malloc(100352);

  //Run convolution : resnetv10_stage2_conv0_fwd__2
  int8_t* resnetv10_stage2_conv0_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(200704);
  transpose_nhwc2vtaio(resnetv10_stage1__plus1__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage2_conv0_fwd__2_input_transpose), 1, 56, 56, 64);
  int8_t* resnetv10_stage2_conv0_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(100352);
  convolution_wo_tr(resnetv10_stage2_conv0_fwd__2_input_transpose, resnetv10_stage2_conv0_weight__1, (int32_t *)conv_bias__25, resnetv10_stage2_conv0_fwd__2_output_bef_transpose, 1, 56, 56, 64, 128, 3, 3, 1, 2, 1, 1, 8, 28, 28, vtaCmdH, 2, 8, 28, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage2_conv0_fwd__2_output_bef_transpose), resnetv10_stage2_conv0_fwd__2_res, 1, 28, 28, 128 );
  VTABufferFree(resnetv10_stage2_conv0_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage2_conv0_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage1__plus1__1_res
  free(resnetv10_stage1__plus1__1_res);

  //Run allocactivation : resnetv10_stage2__plus1__1_res
  int8_t *resnetv10_stage2__plus1__1_res = (int8_t *)malloc(100352);

  //Run convolution : resnetv10_stage2_conv1_fwd__2
  int8_t* resnetv10_stage2_conv1_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(100352);
  transpose_nhwc2vtaio(resnetv10_stage2_conv0_fwd__2_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage2_conv1_fwd__2_input_transpose), 1, 28, 28, 128);
  int8_t* resnetv10_stage2_conv1_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(100352);
  convolution_wo_tr(resnetv10_stage2_conv1_fwd__2_input_transpose, resnetv10_stage2_conv1_weight__1, (int32_t *)conv_bias__26, resnetv10_stage2_conv1_fwd__2_output_bef_transpose, 1, 28, 28, 128, 128, 3, 3, 1, 1, 0, 1, 8, 28, 28, vtaCmdH, 2, 14, 28, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage2_conv1_fwd__2_output_bef_transpose), resnetv10_stage2__plus1__1_res, 1, 28, 28, 128 );
  VTABufferFree(resnetv10_stage2_conv1_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage2_conv1_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage2_conv0_fwd__2_res
  free(resnetv10_stage2_conv0_fwd__2_res);

  //Run elementadd : resnetv10_stage2__plus0__1
  elemadd(resnetv10_stage2_conv2_fwd__2_res, 1.0/64.000000, 0, resnetv10_stage2__plus1__1_res, 1.0/16.000000, 0, resnetv10_stage2__plus1__1_res, 1.0/16.000000, 0, 100352 );

  //Run deallocactivation : dealloc_resnetv10_stage2_conv2_fwd__2_res
  free(resnetv10_stage2_conv2_fwd__2_res);

  //Run relu : resnetv10_stage2_activation0__1
  relu(resnetv10_stage2__plus1__1_res, resnetv10_stage2__plus1__1_res, 100352 );

  //Run allocactivation : resnetv10_stage2_conv3_fwd__2_res
  int8_t *resnetv10_stage2_conv3_fwd__2_res = (int8_t *)malloc(100352);

  //Run convolution : resnetv10_stage2_conv3_fwd__2
  int8_t* resnetv10_stage2_conv3_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(100352);
  transpose_nhwc2vtaio(resnetv10_stage2__plus1__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage2_conv3_fwd__2_input_transpose), 1, 28, 28, 128);
  int8_t* resnetv10_stage2_conv3_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(100352);
  convolution_wo_tr(resnetv10_stage2_conv3_fwd__2_input_transpose, resnetv10_stage2_conv3_weight__1, (int32_t *)conv_bias__27, resnetv10_stage2_conv3_fwd__2_output_bef_transpose, 1, 28, 28, 128, 128, 3, 3, 1, 1, 1, 1, 7, 28, 28, vtaCmdH, 2, 14, 28, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage2_conv3_fwd__2_output_bef_transpose), resnetv10_stage2_conv3_fwd__2_res, 1, 28, 28, 128 );
  VTABufferFree(resnetv10_stage2_conv3_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage2_conv3_fwd__2_output_bef_transpose);

  //Run allocactivation : resnetv10_stage2_conv4_fwd__2_res
  int8_t *resnetv10_stage2_conv4_fwd__2_res = (int8_t *)malloc(100352);

  //Run convolution : resnetv10_stage2_conv4_fwd__2
  int8_t* resnetv10_stage2_conv4_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(100352);
  transpose_nhwc2vtaio(resnetv10_stage2_conv3_fwd__2_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage2_conv4_fwd__2_input_transpose), 1, 28, 28, 128);
  int8_t* resnetv10_stage2_conv4_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(100352);
  convolution_wo_tr(resnetv10_stage2_conv4_fwd__2_input_transpose, resnetv10_stage2_conv4_weight__1, (int32_t *)conv_bias__5, resnetv10_stage2_conv4_fwd__2_output_bef_transpose, 1, 28, 28, 128, 128, 3, 3, 1, 1, 0, 1, 7, 28, 28, vtaCmdH, 2, 14, 28, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage2_conv4_fwd__2_output_bef_transpose), resnetv10_stage2_conv4_fwd__2_res, 1, 28, 28, 128 );
  VTABufferFree(resnetv10_stage2_conv4_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage2_conv4_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage2_conv3_fwd__2_res
  free(resnetv10_stage2_conv3_fwd__2_res);

  //Run elementadd : resnetv10_stage2__plus1__1
  elemadd(resnetv10_stage2__plus1__1_res, 1.0/16.000000, 0, resnetv10_stage2_conv4_fwd__2_res, 1.0/32.000000, 0, resnetv10_stage2__plus1__1_res, 1.0/16.000000, 0, 100352 );

  //Run deallocactivation : dealloc_resnetv10_stage2_conv4_fwd__2_res
  free(resnetv10_stage2_conv4_fwd__2_res);

  //Run relu : resnetv10_stage2_activation1__1
  relu(resnetv10_stage2__plus1__1_res, resnetv10_stage2__plus1__1_res, 100352 );

  //Run allocactivation : resnetv10_stage3_conv2_fwd__2_res
  int8_t *resnetv10_stage3_conv2_fwd__2_res = (int8_t *)malloc(50176);

  //Run convolution : resnetv10_stage3_conv2_fwd__2
  int8_t* resnetv10_stage3_conv2_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(100352);
  transpose_nhwc2vtaio(resnetv10_stage2__plus1__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage3_conv2_fwd__2_input_transpose), 1, 28, 28, 128);
  int8_t* resnetv10_stage3_conv2_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(50176);
  convolution_wo_tr(resnetv10_stage3_conv2_fwd__2_input_transpose, resnetv10_stage3_conv2_weight__1, (int32_t *)conv_bias__28, resnetv10_stage3_conv2_fwd__2_output_bef_transpose, 1, 28, 28, 128, 256, 1, 1, 0, 2, 0, 1, 6, 14, 14, vtaCmdH, 2, 7, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage3_conv2_fwd__2_output_bef_transpose), resnetv10_stage3_conv2_fwd__2_res, 1, 14, 14, 256 );
  VTABufferFree(resnetv10_stage3_conv2_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage3_conv2_fwd__2_output_bef_transpose);

  //Run allocactivation : resnetv10_stage3_conv0_fwd__2_res
  int8_t *resnetv10_stage3_conv0_fwd__2_res = (int8_t *)malloc(50176);

  //Run convolution : resnetv10_stage3_conv0_fwd__2
  int8_t* resnetv10_stage3_conv0_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(100352);
  transpose_nhwc2vtaio(resnetv10_stage2__plus1__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage3_conv0_fwd__2_input_transpose), 1, 28, 28, 128);
  int8_t* resnetv10_stage3_conv0_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(50176);
  convolution_wo_tr(resnetv10_stage3_conv0_fwd__2_input_transpose, resnetv10_stage3_conv0_weight__1, (int32_t *)conv_bias__29, resnetv10_stage3_conv0_fwd__2_output_bef_transpose, 1, 28, 28, 128, 256, 3, 3, 1, 2, 1, 1, 8, 14, 14, vtaCmdH, 2, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage3_conv0_fwd__2_output_bef_transpose), resnetv10_stage3_conv0_fwd__2_res, 1, 14, 14, 256 );
  VTABufferFree(resnetv10_stage3_conv0_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage3_conv0_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage2__plus1__1_res
  free(resnetv10_stage2__plus1__1_res);

  //Run allocactivation : resnetv10_stage3__plus1__1_res
  int8_t *resnetv10_stage3__plus1__1_res = (int8_t *)malloc(50176);

  //Run convolution : resnetv10_stage3_conv1_fwd__2
  int8_t* resnetv10_stage3_conv1_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(50176);
  transpose_nhwc2vtaio(resnetv10_stage3_conv0_fwd__2_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage3_conv1_fwd__2_input_transpose), 1, 14, 14, 256);
  int8_t* resnetv10_stage3_conv1_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(50176);
  convolution_wo_tr(resnetv10_stage3_conv1_fwd__2_input_transpose, resnetv10_stage3_conv1_weight__1, (int32_t *)conv_bias__30, resnetv10_stage3_conv1_fwd__2_output_bef_transpose, 1, 14, 14, 256, 256, 3, 3, 1, 1, 0, 1, 7, 14, 14, vtaCmdH, 2, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage3_conv1_fwd__2_output_bef_transpose), resnetv10_stage3__plus1__1_res, 1, 14, 14, 256 );
  VTABufferFree(resnetv10_stage3_conv1_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage3_conv1_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage3_conv0_fwd__2_res
  free(resnetv10_stage3_conv0_fwd__2_res);

  //Run elementadd : resnetv10_stage3__plus0__1
  elemadd(resnetv10_stage3_conv2_fwd__2_res, 1.0/64.000000, 0, resnetv10_stage3__plus1__1_res, 1.0/32.000000, 0, resnetv10_stage3__plus1__1_res, 1.0/32.000000, 0, 50176 );

  //Run deallocactivation : dealloc_resnetv10_stage3_conv2_fwd__2_res
  free(resnetv10_stage3_conv2_fwd__2_res);

  //Run relu : resnetv10_stage3_activation0__1
  relu(resnetv10_stage3__plus1__1_res, resnetv10_stage3__plus1__1_res, 50176 );

  //Run allocactivation : resnetv10_stage3_conv3_fwd__2_res
  int8_t *resnetv10_stage3_conv3_fwd__2_res = (int8_t *)malloc(50176);

  //Run convolution : resnetv10_stage3_conv3_fwd__2
  int8_t* resnetv10_stage3_conv3_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(50176);
  transpose_nhwc2vtaio(resnetv10_stage3__plus1__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage3_conv3_fwd__2_input_transpose), 1, 14, 14, 256);
  int8_t* resnetv10_stage3_conv3_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(50176);
  convolution_wo_tr(resnetv10_stage3_conv3_fwd__2_input_transpose, resnetv10_stage3_conv3_weight__1, (int32_t *)conv_bias__31, resnetv10_stage3_conv3_fwd__2_output_bef_transpose, 1, 14, 14, 256, 256, 3, 3, 1, 1, 1, 1, 7, 14, 14, vtaCmdH, 2, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage3_conv3_fwd__2_output_bef_transpose), resnetv10_stage3_conv3_fwd__2_res, 1, 14, 14, 256 );
  VTABufferFree(resnetv10_stage3_conv3_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage3_conv3_fwd__2_output_bef_transpose);

  //Run allocactivation : resnetv10_stage3_conv4_fwd__2_res
  int8_t *resnetv10_stage3_conv4_fwd__2_res = (int8_t *)malloc(50176);

  //Run convolution : resnetv10_stage3_conv4_fwd__2
  int8_t* resnetv10_stage3_conv4_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(50176);
  transpose_nhwc2vtaio(resnetv10_stage3_conv3_fwd__2_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage3_conv4_fwd__2_input_transpose), 1, 14, 14, 256);
  int8_t* resnetv10_stage3_conv4_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(50176);
  convolution_wo_tr(resnetv10_stage3_conv4_fwd__2_input_transpose, resnetv10_stage3_conv4_weight__1, (int32_t *)conv_bias__10, resnetv10_stage3_conv4_fwd__2_output_bef_transpose, 1, 14, 14, 256, 256, 3, 3, 1, 1, 0, 1, 8, 14, 14, vtaCmdH, 2, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage3_conv4_fwd__2_output_bef_transpose), resnetv10_stage3_conv4_fwd__2_res, 1, 14, 14, 256 );
  VTABufferFree(resnetv10_stage3_conv4_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage3_conv4_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage3_conv3_fwd__2_res
  free(resnetv10_stage3_conv3_fwd__2_res);

  //Run elementadd : resnetv10_stage3__plus1__1
  elemadd(resnetv10_stage3__plus1__1_res, 1.0/32.000000, 0, resnetv10_stage3_conv4_fwd__2_res, 1.0/32.000000, 0, resnetv10_stage3__plus1__1_res, 1.0/32.000000, 0, 50176 );

  //Run deallocactivation : dealloc_resnetv10_stage3_conv4_fwd__2_res
  free(resnetv10_stage3_conv4_fwd__2_res);

  //Run relu : resnetv10_stage3_activation1__1
  relu(resnetv10_stage3__plus1__1_res, resnetv10_stage3__plus1__1_res, 50176 );

  //Run allocactivation : resnetv10_stage4_conv2_fwd__2_res
  int8_t *resnetv10_stage4_conv2_fwd__2_res = (int8_t *)malloc(25088);

  //Run convolution : resnetv10_stage4_conv2_fwd__2
  int8_t* resnetv10_stage4_conv2_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(50176);
  transpose_nhwc2vtaio(resnetv10_stage3__plus1__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage4_conv2_fwd__2_input_transpose), 1, 14, 14, 256);
  int8_t* resnetv10_stage4_conv2_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(25088);
  convolution_wo_tr(resnetv10_stage4_conv2_fwd__2_input_transpose, resnetv10_stage4_conv2_weight__1, (int32_t *)conv_bias__32, resnetv10_stage4_conv2_fwd__2_output_bef_transpose, 1, 14, 14, 256, 512, 1, 1, 0, 2, 0, 1, 5, 7, 7, vtaCmdH, 2, 7, 7, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage4_conv2_fwd__2_output_bef_transpose), resnetv10_stage4_conv2_fwd__2_res, 1, 7, 7, 512 );
  VTABufferFree(resnetv10_stage4_conv2_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage4_conv2_fwd__2_output_bef_transpose);

  //Run allocactivation : resnetv10_stage4_conv0_fwd__2_res
  int8_t *resnetv10_stage4_conv0_fwd__2_res = (int8_t *)malloc(25088);

  //Run convolution : resnetv10_stage4_conv0_fwd__2
  int8_t* resnetv10_stage4_conv0_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(50176);
  transpose_nhwc2vtaio(resnetv10_stage3__plus1__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage4_conv0_fwd__2_input_transpose), 1, 14, 14, 256);
  int8_t* resnetv10_stage4_conv0_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(25088);
  convolution_wo_tr(resnetv10_stage4_conv0_fwd__2_input_transpose, resnetv10_stage4_conv0_weight__1, (int32_t *)conv_bias__33, resnetv10_stage4_conv0_fwd__2_output_bef_transpose, 1, 14, 14, 256, 512, 3, 3, 1, 2, 1, 1, 8, 7, 7, vtaCmdH, 2, 7, 7, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage4_conv0_fwd__2_output_bef_transpose), resnetv10_stage4_conv0_fwd__2_res, 1, 7, 7, 512 );
  VTABufferFree(resnetv10_stage4_conv0_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage4_conv0_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage3__plus1__1_res
  free(resnetv10_stage3__plus1__1_res);

  //Run allocactivation : resnetv10_stage4__plus0__1_res
  int8_t *resnetv10_stage4__plus0__1_res = (int8_t *)malloc(25088);

  //Run convolution : resnetv10_stage4_conv1_fwd__2
  int8_t* resnetv10_stage4_conv1_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(25088);
  transpose_nhwc2vtaio(resnetv10_stage4_conv0_fwd__2_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage4_conv1_fwd__2_input_transpose), 1, 7, 7, 512);
  int8_t* resnetv10_stage4_conv1_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(25088);
  convolution_wo_tr(resnetv10_stage4_conv1_fwd__2_input_transpose, resnetv10_stage4_conv1_weight__1, (int32_t *)conv_bias__34, resnetv10_stage4_conv1_fwd__2_output_bef_transpose, 1, 7, 7, 512, 512, 3, 3, 1, 1, 0, 1, 7, 7, 7, vtaCmdH, 2, 7, 7, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage4_conv1_fwd__2_output_bef_transpose), resnetv10_stage4__plus0__1_res, 1, 7, 7, 512 );
  VTABufferFree(resnetv10_stage4_conv1_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage4_conv1_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage4_conv0_fwd__2_res
  free(resnetv10_stage4_conv0_fwd__2_res);

  //Run elementadd : resnetv10_stage4__plus0__1
  elemadd(resnetv10_stage4_conv2_fwd__2_res, 1.0/64.000000, 0, resnetv10_stage4__plus0__1_res, 1.0/16.000000, 0, resnetv10_stage4__plus0__1_res, 1.0/16.000000, 0, 25088 );

  //Run deallocactivation : dealloc_resnetv10_stage4_conv2_fwd__2_res
  free(resnetv10_stage4_conv2_fwd__2_res);

  //Run relu : resnetv10_stage4_activation0__1
  relu(resnetv10_stage4__plus0__1_res, resnetv10_stage4__plus0__1_res, 25088 );

  //Run allocactivation : resnetv10_stage4_conv3_fwd__2_res
  int8_t *resnetv10_stage4_conv3_fwd__2_res = (int8_t *)malloc(25088);

  //Run convolution : resnetv10_stage4_conv3_fwd__2
  int8_t* resnetv10_stage4_conv3_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(25088);
  transpose_nhwc2vtaio(resnetv10_stage4__plus0__1_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage4_conv3_fwd__2_input_transpose), 1, 7, 7, 512);
  int8_t* resnetv10_stage4_conv3_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(25088);
  convolution_wo_tr(resnetv10_stage4_conv3_fwd__2_input_transpose, resnetv10_stage4_conv3_weight__1, (int32_t *)conv_bias__35, resnetv10_stage4_conv3_fwd__2_output_bef_transpose, 1, 7, 7, 512, 512, 3, 3, 1, 1, 1, 1, 6, 7, 7, vtaCmdH, 2, 7, 7, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage4_conv3_fwd__2_output_bef_transpose), resnetv10_stage4_conv3_fwd__2_res, 1, 7, 7, 512 );
  VTABufferFree(resnetv10_stage4_conv3_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage4_conv3_fwd__2_output_bef_transpose);

  //Run allocactivation : resnetv10_stage4_conv4_fwd__2_res
  int8_t *resnetv10_stage4_conv4_fwd__2_res = (int8_t *)malloc(25088);

  //Run convolution : resnetv10_stage4_conv4_fwd__2
  int8_t* resnetv10_stage4_conv4_fwd__2_input_transpose = (int8_t *)VTABufferAlloc(25088);
  transpose_nhwc2vtaio(resnetv10_stage4_conv3_fwd__2_res, (int8_t* )VTABufferGetVirtAddr(resnetv10_stage4_conv4_fwd__2_input_transpose), 1, 7, 7, 512);
  int8_t* resnetv10_stage4_conv4_fwd__2_output_bef_transpose = (int8_t *)VTABufferAlloc(25088);
  convolution_wo_tr(resnetv10_stage4_conv4_fwd__2_input_transpose, resnetv10_stage4_conv4_weight__1, (int32_t *)conv_bias__15, resnetv10_stage4_conv4_fwd__2_output_bef_transpose, 1, 7, 7, 512, 512, 3, 3, 1, 1, 0, 1, 7, 7, 7, vtaCmdH, 2, 7, 7, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(resnetv10_stage4_conv4_fwd__2_output_bef_transpose), resnetv10_stage4_conv4_fwd__2_res, 1, 7, 7, 512 );
  VTABufferFree(resnetv10_stage4_conv4_fwd__2_input_transpose);
  VTABufferFree(resnetv10_stage4_conv4_fwd__2_output_bef_transpose);

  //Run deallocactivation : dealloc_resnetv10_stage4_conv3_fwd__2_res
  free(resnetv10_stage4_conv3_fwd__2_res);

  //Run allocactivation : resnetv10_stage4__plus1__1_res
  int8_t *resnetv10_stage4__plus1__1_res = (int8_t *)malloc(25088);

  //Run elementadd : resnetv10_stage4__plus1__1
  elemadd(resnetv10_stage4__plus0__1_res, 1.0/16.000000, 0, resnetv10_stage4_conv4_fwd__2_res, 1.0/8.000000, 0, resnetv10_stage4__plus1__1_res, 1.0/4.000000, 0, 25088 );

  //Run deallocactivation : dealloc_resnetv10_stage4__plus0__1_res
  free(resnetv10_stage4__plus0__1_res);

  //Run deallocactivation : dealloc_resnetv10_stage4_conv4_fwd__2_res
  free(resnetv10_stage4_conv4_fwd__2_res);

  //Run relu : resnetv10_stage4_activation1__1
  relu(resnetv10_stage4__plus1__1_res, resnetv10_stage4__plus1__1_res, 25088 );

  //Run allocactivation : resnetv10_pool1_fwd__1_res
  int8_t *resnetv10_pool1_fwd__1_res = (int8_t *)malloc(512);

  //Run avgpool : resnetv10_pool1_fwd__1
  avgpool(resnetv10_stage4__plus1__1_res, 1.0/4.000000, 0, resnetv10_pool1_fwd__1_res, 1.0/16.000000, 0, 1, 7, 7, 512, 1, 1, 1, 512, 7, 7, 0, 1 );

  //Run deallocactivation : dealloc_resnetv10_stage4__plus1__1_res
  free(resnetv10_stage4__plus1__1_res);

  //Run tensorview : resnetv10_pool1_fwd__1_res__2
  int8_t* resnetv10_pool1_fwd__1_res__2 = resnetv10_pool1_fwd__1_res;

  //Run allocactivation : resnetv10_dense0_fwd__2_res
  int8_t *resnetv10_dense0_fwd__2_res = (int8_t *)malloc(1000);

  //Run fullyconnected : resnetv10_dense0_fwd__2
  fullyconnected(resnetv10_pool1_fwd__1_res__2, 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(resnetv10_dense0_weight__1), 1.0/128.000000, 0, (int8_t *)VTABufferGetVirtAddr(resnetv10_dense0_bias), 1.0/2048.000000, 0, resnetv10_dense0_fwd__2_res, 1.0/8.000000, 0, 1, 512, 512, 1000, 1, 1000, 1 );

  //Run deallocactivation : dealloc_resnetv10_pool1_fwd__1_res
  free(resnetv10_pool1_fwd__1_res);

  //Run dequantize : resnetv10_dense0_fwd__2_dequantize
  int8_t* resnetv10_dense0_fwd__1 = (int8_t*)mutableWeight + 602112;
  dequantize(resnetv10_dense0_fwd__2_res, resnetv10_dense0_fwd__1, 1000, 1/8.000000, 0 );

  //Run deallocactivation : dealloc_resnetv10_dense0_fwd__2_res
  free(resnetv10_dense0_fwd__2_res);
  return 0;
}