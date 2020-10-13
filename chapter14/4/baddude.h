#ifndef BADDUDE_H_
#define BADDUDE_H
#include "gunslinger.h"
#include "pokerplayer.h"

class BadDude : public Gunslinger, public PokerPlayer {
protected:
	void Data() const;
public:
	double Gdraw() const {return Gunslinger::Draw();}
	double Cdraw() const {return PokerPlayer::Draw();}
	void Show() const;
	void Set();
};

#endif
