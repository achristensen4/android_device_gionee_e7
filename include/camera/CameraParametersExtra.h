#define CAMERA_PARAMETERS_EXTRA_C  \
const char CameraParameters::KEY_QC_SUPPORTED_DENOISE[] = "denoise-values"; \
const char CameraParameters::KEY_QC_SUPPORTED_FACE_DETECTION[] = "face-detection-values"; \
const char CameraParameters::KEY_QC_SUPPORTED_HFR_SIZES[] = "hfr-size-values"; \
const char CameraParameters::KEY_QC_SUPPORTED_REDEYE_REDUCTION[] = "redeye-reduction-values"; \
const char CameraParameters::KEY_QC_SUPPORTED_TOUCH_AF_AEC[] = "touch-af-aec-values"; \
const char CameraParameters::KEY_QC_SUPPORTED_VIDEO_HIGH_FRAME_RATE_MODES[] = "video-hfr-values"; \
const char CameraParameters::KEY_QC_SUPPORTED_ZSL_MODES[] = "zsl-values"; \
const char CameraParameters::KEY_QC_VIDEO_HIGH_FRAME_RATE[] = "video-hfr"; \
const char CameraParameters::KEY_QC_ZSL[] = "zsl"; \
const char CameraParameters::PIXEL_FORMAT_YUV420SP_ADRENO[] = "yuv420sp-adreno"; \
const char CameraParameters::PIXEL_FORMAT_RAW[] = "raw"; \
const char CameraParameters::PIXEL_FORMAT_YV12[] = "yuv420p"; \
const char CameraParameters::PIXEL_FORMAT_NV12[] = "nv12"; \
const char CameraParameters::SCENE_MODE_GESTURE[] = "gesture"; \
const char CameraParameters::SCENE_MODE_FOOD[] = "food"; \
const char CameraParameters::EXP_BRACKETING_OFF[] = "bracket-off"; \
int CameraParameters::getStr(const char *) const { return -1; };

#define CAMERA_PARAMETERS_EXTRA_H \
    static const char KEY_QC_SUPPORTED_DENOISE[]; \
    static const char KEY_QC_SUPPORTED_FACE_DETECTION[]; \
    static const char KEY_QC_SUPPORTED_HFR_SIZES[]; \
    static const char KEY_QC_SUPPORTED_REDEYE_REDUCTION[]; \
    static const char KEY_QC_SUPPORTED_TOUCH_AF_AEC[]; \
    static const char KEY_QC_SUPPORTED_VIDEO_HIGH_FRAME_RATE_MODES[]; \
    static const char KEY_QC_SUPPORTED_ZSL_MODES[]; \
    static const char KEY_QC_VIDEO_HIGH_FRAME_RATE[]; \
    static const char KEY_QC_ZSL[]; \
    static const char PIXEL_FORMAT_YUV420SP_ADRENO[]; \
    static const char PIXEL_FORMAT_RAW[]; \
    static const char PIXEL_FORMAT_YV12[]; \
    static const char PIXEL_FORMAT_NV12[]; \
    static const char SCENE_MODE_GESTURE[]; \
    static const char SCENE_MODE_FOOD[]; \
    static const char EXP_BRACKETING_OFF[]; \
    int getStr(const char *) const;
