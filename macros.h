/*
 * macros.h
 *
 *  Created on: Aug 28, 2023
 *      Author: omara
 */

#ifndef MACROS_H_
#define MACROS_H_
#define set_bit(x,n)  (x |= (1<<n))
#define clear_bit(x,n) (x &=(~(1<<n)))
#define toggle_bit(x,n) (x^=(1<<n))
#define get_bit(x,n) ((x>>n)&1)



#endif /* MACROS_H_ */
