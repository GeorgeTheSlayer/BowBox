//
// Created by Holland Sersen on 12/30/23.
//

#ifndef SOURCE_MONOVERB_H
#define SOURCE_MONOVERB_H


class Monoverb {
    float sampleRate;

public:
    void Init( float SampleRate){
        this->sampleRate = SampleRate;
    }

    float getSampleRate(){
        return sampleRate;
    }

};


#endif //SOURCE_MONOVERB_H
