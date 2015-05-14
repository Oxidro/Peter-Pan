void Match::setStartPosition(Team A_, Team B_) {

}

bool Match::playerIsCloseToTheBall(Player p) {

	return false;
}

int Match::ballStatus(Player p) {
	if(A.hasPlayer(p)) {
		for(int i=0; i<11; i++) {
			if(ball == A.players[i].getPosition())
				return 1;
		}
	}else {
		for(int i=0; i<11; i++) {
			if(ball == B.players[i].getPosition())
				return 1;
		}
	}
	return 0;
}

void Match::movement(Player p) {
	if (ball == p.getPosition()) {
		ball = p.whatToDoWithTheBall();
	} else if (ballStatus(p) == 1) {
		p.run(2);
	} else {
		if (playerIsCloseToTheBall(p))
			p.run(1);
		else
			p.run(3);
	}

}

void Match::playMatch() {
	for(int min = 1; min <= 90; min++) {
		for(int i=0; i<11; i++) {
			movement(A.players[i]);
			movement(B.players[i]);
		}
	}
}
