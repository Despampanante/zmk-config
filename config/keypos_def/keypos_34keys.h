/* This file is copied and then modified from https://github.com/urob/zmk-nodefree-config/blob/973f717c6bbde9cf452a4da88ac9a7f80cdd4bef/keypos_def/keypos_34keys.h
 * LICENSE for that repo is inlined below.

 * MIT License
 *
 * Copyright (c) 2023 Robert U
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*                              34 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │  0   1   2   3   4 │  5   6   7   8   9 │ │ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
  │ 10  11  12  13  14 │ 15  16  17  18  19 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
  │ 20  21  22  23  24 │ 25  26  27  28  29 │ │ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
  ╰───────────╮ 30  31 │ 32  33 ╭───────────╯ ╰───────────╮ LH1 LH0 │ RH0 RH1 ╭───────────╯
              ╰────────┴────────╯                         ╰─────────┴─────────╯             */

#pragma once

#define LTC  4  // left-top row
#define LTP  3
#define LTM  2
#define LTR  1
#define LTP  0

#define RTC  5  // right-top row
#define RTP  6
#define RTM  7
#define RTR  8
#define RTP  9

#define LMC 14  // left-middle row
#define LMP 13
#define LMM 12
#define LMR 11
#define LMP 10

#define RMC 15  // right-middle row
#define RMP 16
#define RMM 17
#define RMR 18
#define RMP 19

#define LBC 24  // left-bottom row
#define LBP 23
#define LBM 22
#define LBR 21
#define LBP 20

#define RBC 25  // right-bottom row
#define RBP 26
#define RBM 27
#define RBR 28
#define RBP 29

#define LHI 31  // left thumb keys
#define LHO 30

#define RHI 32  // right thumb keys
#define RHO 33

#define KEYS_L LTP LTR LTM LTP LTC LMP LMR LMM LMP LMC LBP LBR LBM LBP LBC  // left-hand keys
#define KEYS_R RTC RTP RTM RTR RTP RMC RMP RMM RMR RMP RBC RBP RBM RBR RBP  // right-hand keys
#define THUMBS     LHI LHO RHI RHO                                          // thumb keys

#define LAYER_FROM36( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
              k30, k31, k32, k33, k34, k35            \
) \
    k00  k01  k02  k03  k04  k05  k06  k07  k08  k09  \
    k10  k11  k12  k13  k14  k15  k16  k17  k18  k19  \
    k20  k21  k22  k23  k24  k25  k26  k27  k28  k29  \
                   k31  k32  k33  k34
