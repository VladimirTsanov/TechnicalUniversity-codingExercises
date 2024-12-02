def FindDayWinner(*day_winner):
    team1_wins = 0
    team2_wins = 0
    for team in day_winner:
        if team == "Team1":
            team1_wins +=1
        elif team == "Team2":
            team2_wins += 1
    if team1_wins > team2_wins:
        print("The winner of the day is Team 1")
    elif team2_wins > team1_wins:
        print("The winner of the day is Team 2")
    else:
        print("Tie")

FindDayWinner("Team1", "Team2", "Team1", "Team2")
