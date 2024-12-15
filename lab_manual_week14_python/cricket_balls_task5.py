def total_overs(balls):
    overs = balls // 6
    remaining_balls = balls % 6
    return overs, remaining_balls


balls = int(input("Enter the number of balls: "))
overs, remaining_balls = total_overs(balls)
if remaining_balls != 0:
    print(f"{overs}.{remaining_balls}")
else:
    print(overs)