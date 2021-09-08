/**
 * @file calculator.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FLAMESCALCULATOR_H__
#define __FLAMESCALCULATOR_H__
/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
typedef enum error_t {
    SUCCESS = 1,             // Successful operation
    ERROR = 0,              // Error in operation
    ERROR_DIV_BY_0 = -1       // Division By zero error
}error_t;


int flame_calculator(char* y, char* p);
#endif 
