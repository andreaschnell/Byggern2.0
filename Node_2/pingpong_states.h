/*
 * pingpong_states.h
 *
 * Created: 28.10.2020 11:37:09
 *  Author: sandrgl
 */ 


#ifndef PINGPONG_STATES_H_
#define PINGPONG_STATES_H_

#define THRESHOLD_ADC 1000

typedef struct pingpong_s{
	int ball_detected;
	int score;
}pingpong;

pingpong pingpong_state;

void count_score(void);


#endif /* PINGPONG_STATES_H_ */