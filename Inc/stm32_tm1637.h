#ifndef TM1637_H_
#define TM1637_H_

#pragma once

#ifdef __cplusplus
extern "C" {
#endif
void tm1637Init(void);
void tm1637DisplayDecimal(int v, int displaySeparator);
void tm1637DisplayHex(int v, int displaySeparator);
void tm1637SetBrightness(char brightness);

#ifdef __cplusplus
}
#endif

#endif /* TM1637_H_ */
