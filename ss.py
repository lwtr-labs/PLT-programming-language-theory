def str_to_YMD(strin):
    return int(strin[0:4]), int(strin[5:7]), int(strin[8:])


def solution(today, terms, privacies):
    today_y, today_m, today_d = str_to_YMD(today)
    today_ymd = [today_y, today_m, today_d]
    
    result = []
    
    for i in range(len(privacies)):
        x, y, z = str_to_YMD(privacies[i][0:10:1])
        privacies[i] = [x, y, z, privacies[i][11]]
    
    for i in range(len(privacies)):
        for j in range(len(terms)):
            if terms[j][0] == privacies[i][4]:
                privacies[i][2] += int(terms[j][2:])*28
                temp = privacies[i][2] // 28
                privacies[i][2] = privacies[i][2] % 28
                
                if privacies[i][1] + temp > 12:
                    m_temp = privacies[i][1] // 12
                    privacies[i][1] = privacies[i][1] % 12
                    privacies[i][0] += m_temp
                else:
                    privacies[i][1] += temp
    
    for i in range(len(privacies)):
        if privacies[i][0] > today_ymd[0]:
            result.append(i+1)
        elif privacies[i][0] == today_ymd[0]:
            if privacies[i][1] > today_ymd[1]:
                result.append(i+1)
            elif privacies[i][1] == today_ymd[1]:
                if privacies[i][2] >= today_ymd[2]:
                    result.append(i+1)
                else:
                    pass
        else:
            if privacies[i][1] > today_ymd[1]:
                result.append(i+1)
            elif privacies[i][1] == today_ymd[1]:
                if privacies[i][2] >= today_ymd[2]:
                    result.append(i+1)
    return result
            
                    