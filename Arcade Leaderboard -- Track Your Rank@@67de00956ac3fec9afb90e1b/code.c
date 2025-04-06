// Your code here...def find_ranks(leaderboard_scores, player_scores):
    // # Create a unique, sorted list of leaderboard scores
    unique_leaderboard_scores = sorted(set(leaderboard_scores), reverse=True)

    // # List to store the player's ranks
    player_ranks = []

    for score in player_scores:
       
        rank = 1

        for l_score in unique_leaderboard_scores:
            if score >= l_score:
                break
            rank += 1

       
        player_ranks.append(rank)

    return player_ranks


n = int(input())
leaderboard_scores = list(map(int, input().split()))
m = int(input())
player_scores = list(map(int, input().split()))


ranks = find_ranks(leaderboard_scores, player_scores)

for rank in ranks:
    print(rank)
