#define CAMERA_PARAMETERS_EXTRA_C  \
const char CameraParameters::SCENE_MODE_GESTURE[] = "gesture"; \
const char CameraParameters::SCENE_MODE_FOOD[] = "food"; \
void CameraParameters::setAEBracket(const char ) { set(EXP_BRACKETING_OFF); }; \
int CameraParameters::getStr(const char *key) const { return -1; };

#define CAMERA_PARAMETERS_EXTRA_H \
static const char SCENE_MODE_GESTURE[]; \
static const char SCENE_MODE_FOOD[]; \
void setAEBracket(const char ); \
int getStr(const char *key) const;
