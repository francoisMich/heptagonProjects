/* --- Generated the 13/8/2018 at 18:36 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_H
#define SYSTEM_H

#include "system_types.h"
#include "controller_controller.h"
typedef struct System__light_source_mem {
  int ck_1_2;
  int pnr;
} System__light_source_mem;

typedef struct System__light_source_out {
  int light_source_on;
} System__light_source_out;

void System__light_source_reset(System__light_source_mem* self);

void System__light_source_step(int sw, int c1, int c2,
                               System__light_source_out* _out,
                               System__light_source_mem* self);

typedef struct System__door_mem {
  int ck_1;
  int pnr;
} System__door_mem;

typedef struct System__door_out {
  int door_open;
} System__door_out;

void System__door_reset(System__door_mem* self);

void System__door_step(int c, System__door_out* _out, System__door_mem* self);

typedef struct System__closet_mem {
  int ck_1;
  int pnr;
} System__closet_mem;

typedef struct System__closet_out {
  int closet_open;
} System__closet_out;

void System__closet_reset(System__closet_mem* self);

void System__closet_step(int c, System__closet_out* _out,
                         System__closet_mem* self);

typedef struct System__person_mem {
  int ck_1;
  int pnr;
} System__person_mem;

typedef struct System__person_out {
  int presence;
} System__person_out;

void System__person_reset(System__person_mem* self);

void System__person_step(int arrived, System__person_out* _out,
                         System__person_mem* self);

typedef struct System__computer_mem {
  int ck_1;
  int pnr;
} System__computer_mem;

typedef struct System__computer_out {
  int computer_on;
} System__computer_out;

void System__computer_reset(System__computer_mem* self);

void System__computer_step(int c, System__computer_out* _out,
                           System__computer_mem* self);

typedef struct System__window_mem {
  int ck_1;
  int pnr;
} System__window_mem;

typedef struct System__window_out {
  int window_open;
} System__window_out;

void System__window_reset(System__window_mem* self);

void System__window_step(int c, System__window_out* _out,
                         System__window_mem* self);

typedef struct System__air_conditioner_mem {
  int v_245;
  int v_244;
  int pnr;
} System__air_conditioner_mem;

typedef struct System__air_conditioner_out {
  int air_state;
} System__air_conditioner_out;

void System__air_conditioner_reset(System__air_conditioner_mem* self);

void System__air_conditioner_step(int c1, int c2,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self);

typedef struct System__day_shift_mem {
  int ck_1;
  int pnr;
} System__day_shift_mem;

typedef struct System__day_shift_out {
  int night;
} System__day_shift_out;

void System__day_shift_reset(System__day_shift_mem* self);

void System__day_shift_step(int change, System__day_shift_out* _out,
                            System__day_shift_mem* self);

typedef struct System__fail_mem {
  int ck_1;
  int pnr;
} System__fail_mem;

typedef struct System__fail_out {
  int failed;
} System__fail_out;

void System__fail_reset(System__fail_mem* self);

void System__fail_step(int failed_recovered, System__fail_out* _out,
                       System__fail_mem* self);

typedef struct System__light_source_fail_mem {
  int ck_12_1;
  int ck_10_1;
  int pnr_1;
  int pnr;
} System__light_source_fail_mem;

typedef struct System__light_source_fail_out {
  int out;
} System__light_source_fail_out;

void System__light_source_fail_reset(System__light_source_fail_mem* self);

void System__light_source_fail_step(int sw, int c1, int c2,
                                    int failed_recovered,
                                    System__light_source_fail_out* _out,
                                    System__light_source_fail_mem* self);

typedef struct System__door_fail_mem {
  int ck_16_1;
  int ck_14_1;
  int pnr_2;
  int pnr;
} System__door_fail_mem;

typedef struct System__door_fail_out {
  int out;
} System__door_fail_out;

void System__door_fail_reset(System__door_fail_mem* self);

void System__door_fail_step(int c1, int failed_recovered,
                            System__door_fail_out* _out,
                            System__door_fail_mem* self);

typedef struct System__closet_fail_mem {
  int ck_20_1;
  int ck_18_1;
  int pnr_3;
  int pnr;
} System__closet_fail_mem;

typedef struct System__closet_fail_out {
  int out;
} System__closet_fail_out;

void System__closet_fail_reset(System__closet_fail_mem* self);

void System__closet_fail_step(int c1, int failed_recovered,
                              System__closet_fail_out* _out,
                              System__closet_fail_mem* self);

typedef struct System__computer_fail_mem {
  int ck_24_1;
  int ck_22_1;
  int pnr_4;
  int pnr;
} System__computer_fail_mem;

typedef struct System__computer_fail_out {
  int out;
} System__computer_fail_out;

void System__computer_fail_reset(System__computer_fail_mem* self);

void System__computer_fail_step(int c1, int failed_recovered,
                                System__computer_fail_out* _out,
                                System__computer_fail_mem* self);

typedef struct System__window_fail_mem {
  int ck_28_1;
  int ck_26_1;
  int pnr_5;
  int pnr;
} System__window_fail_mem;

typedef struct System__window_fail_out {
  int out;
} System__window_fail_out;

void System__window_fail_reset(System__window_fail_mem* self);

void System__window_fail_step(int c1, int failed_recovered,
                              System__window_fail_out* _out,
                              System__window_fail_mem* self);

typedef struct System__air_fail_mem {
  int ck_32_1;
  int v_261;
  int v_260;
  int pnr_6;
  int pnr;
} System__air_fail_mem;

typedef struct System__air_fail_out {
  int out;
} System__air_fail_out;

void System__air_fail_reset(System__air_fail_mem* self);

void System__air_fail_step(int c1, int c2, int failed_recovered,
                           System__air_fail_out* _out,
                           System__air_fail_mem* self);

typedef struct System__controller_mem {
  int ck_63_1;
  int ck_61_1;
  int ck_58_1;
  int ck_56_1;
  int ck_53_1;
  int ck_51_1;
  int ck_48_1;
  int ck_46_1;
  int v_277;
  int v_276;
  int ck_41_1;
  int ck_39_1;
  int ck_37_1;
  int ck_35_1;
  int ck_1;
  int pnr_19;
  int pnr_18;
  int pnr_17;
  int pnr_16;
  int pnr_15;
  int pnr_14;
  int pnr_13;
  int pnr_12;
  int pnr_11;
  int pnr_10;
  int pnr_9;
  int pnr_8;
  int pnr_7;
  int pnr;
} System__controller_mem;

typedef struct System__controller_out {
  int night;
  int worker_presence;
  int cleaner_presence;
  int door_status;
  int pc_status;
  int window_status;
  int closet_status;
  int air_status;
  int light_status;
  int blind_status;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int change_shift, int worker, int cleaner,
                             int air_failed_recovered, int light_switch,
                             int light_failed_recovered, int blind_switch,
                             int blind_failed_recovered,
                             int door_failed_recovered,
                             int closet_failed_recovered,
                             int pc_failed_recovered,
                             int window_failed_recovered,
                             System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
