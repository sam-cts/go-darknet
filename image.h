#pragma once

#include <darknet.h>

extern void fill_image_f32(image *im, int w, int h, int c, float* data);
extern void set_data_f32_val(float* data, int index, float value);
image resize_image_golang(image im, int w, int h);