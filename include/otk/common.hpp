#ifndef OTK_COMMON_HDR
#define OTK_COMMON_HDR

#include <stdint.h>

namespace otk {

/** @brief Base for all RC/MT objects */
class ObjBase {
public:
private:
  uint32_t _rc=0;
  uint32_t _lck=0;
};


} // namespace otk

#endif  // OTK_COMMON_HDR