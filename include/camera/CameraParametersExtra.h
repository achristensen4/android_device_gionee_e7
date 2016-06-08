#define CAMERA_PARAMETERS_EXTRA_C  \
const char CameraParameters::SCENE_MODE_GESTURE[] = "gesture"; \
const char CameraParameters::SCENE_MODE_FOOD[] = "food"; \
int CameraParameters::getStr(const char *key) const { return -1; };

#define CAMERA_PARAMETERS_EXTRA_H \
static const char SCENE_MODE_GESTURE[]; \
static const char SCENE_MODE_FOOD[]; \
int getStr(const char *key) const;
