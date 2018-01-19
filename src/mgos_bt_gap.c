#include "mgos_bt_gap.h"

struct mg_str mgos_bt_gap_parse_adv_data(const uint8_t *data,
                                         enum mgos_bt_gap_eir_type t) {
  struct mg_str res = MG_NULL_STR;
  for (int i = 0; i < MGOS_BT_GAP_ADV_DATA_LEN; i += data[i] + 1) {
    if (i + data[i] + 1 <= MGOS_BT_GAP_ADV_DATA_LEN && data[i + 1] == t) {
      res.p = (char *) &data[i + 2];
      res.len = data[i] - 1;
      break;
    }
  }
  return res;
}
