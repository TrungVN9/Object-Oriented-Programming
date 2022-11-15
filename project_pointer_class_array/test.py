def net_worth(assets, debt=0, inheritance=0):
    return assets - debt + inheritance


print(net_worth(1000))
