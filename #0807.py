def to_minutes(time):
    hh, mm = map(int, time.split(":"))
    return hh*60+mm
times = ["00:00","01:10","02:20","03:30","04:40","05:50","10:01","11:11","12:21","13:31","14:41","15:51","20:02","21:12","22:22","23:32"]
time = input()
minutes = to_minutes(time)
for i, t in  enumerate(times):
    if to_minutes(t) <= minutes:
        index = i
print(times[(index+1)%len(times)])