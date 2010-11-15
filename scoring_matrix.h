/*
 *  scoring_matrix.h
 *  MstatX++
 *
 *  Created by COLLET Guillaume on 04/11/10.
 *
 */

#ifndef __SCORING_MATRIX_H__
#define __SCORING_MATRIX_H__

#include <string>

using namespace std;

class ScoringMatrix
{
protected:
	string alphabet;
	float ** matrix;
  bool is_set;
	float **aa_vect;  /**< Normalized vector of each amino acid type */

public:
	ScoringMatrix(string fname);
	virtual ~ScoringMatrix();
	
	int getAlphabetSize(){return (int) alphabet.size();};
	string getAlphabet(){return alphabet;};
	int index(char aa);
	float score(char aa, char aa);
	bool isSet(){return is_set;};
};

#endif

