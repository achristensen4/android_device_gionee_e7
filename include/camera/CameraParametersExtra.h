#define CAMERA_PARAMETERS_EXTRA_C  \
int CameraParameters::getStr(const char *key) const { return -1; };

#define CAMERA_PARAMETERS_EXTRA_H \
int getStr(const char *key) const;
