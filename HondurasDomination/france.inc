
##############################
# Country definition for FRA #
##############################

province =
{ id         = 32
  ic         = 1
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Brest
province = { id = 35 anti_air = 2 } # Nantes
province =
{ id         = 38
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # Cherbourg
province = { id = 39 anti_air = 1 } # Caen
province =
{ id         = 43
  naval_base = { size = 3 current_size = 3 }
}              # Dunkerque
province =
{ id       = 44
  air_base = { size = 10 current_size = 10 }
  anti_air = 1
}            # Lille
province =
{ id       = 56
  ic       = 1
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
}            # Paris
province =
{ id       = 59
  air_base = { size = 10 current_size = 10 }
}            # Cholet
province =
{ id       = 62
  air_base = { size = 10 current_size = 10 }
}            # Auxerre
province =
{ id       = 72
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  landfort = 10
}            # Metz
province = { id = 73 anti_air = 2 landfort = 10 } # Strasbourg
province = { id = 316 anti_air = 2 landfort = 10 } # Mulhouse
province = { id = 317 anti_air = 1 } # Chaumont
province = { id = 320 ic = 1 anti_air = 1 } # Vichy
province =
{ id         = 325
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # Bordeaux
province =
{ id       = 359
  air_base = { size = 10 current_size = 10 }
}            # Toulouse
province =
{ id         = 364
  ic         = 1
  anti_air   = 5
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Marseille
province = { id = 366 landfort = 5 } # Nice
province = { id = 527 landfort = 3 } # Grenoble
province = { id = 528 ic = 1 } # Lyon
province = { id = 875 supplypool = 1 } # Cayenne
province =
{ id         = 939
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}              # Tunis
province =
{ id         = 949
  supplypool = 500
  oilpool    = 1
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
}              # Algiers
province =
{ id         = 953
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # Oran
province =
{ id         = 958
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Casablanca
province =
{ id         = 981
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # Dakar
province =
{ id       = 993
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Abidjan
province = { id = 1037 supplypool = 1 } # Djibouti
province =
{ id         = 1328
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Hanoi
province =
{ id         = 1337
  supplypool = 100
  oilpool    = 1
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Saigon
province =
{ id         = 1794
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}              # Beirut

#####################
# Country main data #
#####################

country =
{ tag                    = FRA
  capital                = 56
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  manpower               = 325
  transports             = 300
  escorts                = 60
  peacetime_ic_mod       = 0.5
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = AUS value = -10 }
    relation =
    { tag        = BEL
      value      = 120
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = BHU value = 150 }
    relation = { tag = BUL value = 20 }
    relation = { tag = CAN value = 150 }
    relation = { tag = CZE value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = EST value = 65 }
    relation = { tag = ETH value = 25 }
    relation = { tag = FIN value = 85 }
    relation = { tag = GER value = -35 }
    relation = { tag = GRE value = 20 }
    relation =
    { tag        = HOL
      value      = 75
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = HUN value = -70 }
    relation = { tag = IRE value = 25 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -50 }
    relation = { tag = JAP value = -20 }
    relation = { tag = LAT value = 65 }
    relation = { tag = LIT value = 65 }
    relation =
    { tag        = LUX
      value      = 120
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = NEP value = 150 }
    relation =
    { tag        = NOR
      guaranteed = { day = 30 month = august year = 1934 }
    }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation =
    { tag        = POL
      value      = 100
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 10 }
    relation =
    { tag        = SCH
      value      = 1
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = SPR value = 10 }
    relation =
    { tag        = TUR
      value      = 50
      guaranteed = { day = 7 month = january year = 1935 }
    }
    relation = { tag = USA value = 65 }
    relation = { tag = YEM value = 150 }
    relation =
    { tag        = YUG
      value      = 50
      guaranteed = { day = 7 month = january year = 1935 }
    }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 5 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 4 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 4 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 2 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  # Togoland
  # Metropolitan France
  nationalprovinces      = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72 
                             64  53  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
                           }
  # Metropolitan France
  ownedprovinces         = { 529  527  366  365  367  364  363  362  358  328  327  326  325  324  359  361  319  360  322  323  59   60   61   62  
                             63   318  317  316  73   72   64   53   44   43   18   54   42   55   41   56   57   58   32   33   34   35   36   37  
                             38   39   40   320  321  528  875  898  899  956  969  968  959  958  960  966  1014 970  1013 943  942  945  944  946 
                             947  949  948  951  950  952  953  935  934  936  938  937  939  940  941  1862 1861 1863 1792 1793 1794 1795 1037 973 
                             974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980  986  979  994  996  997  1005 1006 991  995 
                             993  1088 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135 1338 1339 1340 1337 1335
                             1336 1334 1333 1332 1341 1329 1328 1306 1326 1692 1691 1687 1690 1689 1688 1751 1003 1004
                           }
  # Togoland
  # Metropolitan France
  controlledprovinces    = { 529  527  366  365  367  364  363  362  358  328  327  326  325  324  359  361  319  360  322  323  59   60   61   62  
                             63   318  317  316  73   72   64   53   44   43   18   54   42   55   41   56   57   58   32   33   34   35   36   37  
                             38   39   40   320  321  528  875  898  899  956  969  968  959  958  960  966  1014 970  1013 943  942  945  944  946 
                             947  949  948  951  950  952  953  935  934  936  938  937  939  940  941  1862 1861 1863 1792 1793 1794 1795 1037 973 
                             974  975  1083 1084 998  976  977  978  981  984  987  989  990  985  980  986  979  994  996  997  1005 1006 991  995 
                             993  1088 1082 1081 1080 1079 1086 1070 1078 1077 1087 1089 1092 1093 1075 1076 1134 1137 1135 1338 1339 1340 1337 1335
                             1336 1334 1333 1332 1341 1329 1328 1306 1326 1692 1691 1687 1690 1689 1688 1751 1003 1004
                           }
  # FRA 1936 techs
  # ######################
  techapps               = { 4010  4020  4120  4130  2150  2010  2020  2030  2290  2300  2310  2040  2450  2460  2510  1010  1020  1190  1200  1110 
                             2400  1310  5010  5020  5050  5080  5090  5190  5200  5310  5320  5470  5480  9010  9020  9030  9040  6010  6030  6110 
                             6120  8010  8020  8030  8040  8050  8070  8100  3010  3020  3030  3070  3080  3090  3100  3130  3140  3150  3190  3200 
                             3210  3220  3250  3260  3270  3280  3320  3330  3400  3410  3420  14000
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    free_market       = 8
    freedom           = 10
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 2001 }
  headofgovernment       = { type = 9 id = 2002 }
  foreignminister        = { type = 9 id = 2003 }
  armamentminister       = { type = 9 id = 2004 }
  ministerofsecurity     = { type = 9 id = 2005 }
  ministerofintelligence = { type = 9 id = 2006 }
  chiefofstaff           = { type = 9 id = 2007 }
  chiefofarmy            = { type = 9 id = 2008 }
  chiefofnavy            = { type = 9 id = 2009 }
  chiefofair             = { type = 9 id = 2010 }

  nationalidentity = "policy_identity_conciliatory" 
	socialpolicy = "policy_social_liberal"
	nationalculture = "policy_culture_civic"

  # #################
  # ###FRENCH OOB####
  # #################
  landunit =
  { id       = { type = 13500 id = 1 }
    name     = "7e Armée"
    location = 55
    division =
    { id    = { type = 13500 id = 2 }
      name  = "4e Division d'Infanterie"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 13500 id = 3 }
      name = "60e Division d'Infanterie"
      type = infantry
    }
    division =
    { id    = { type = 13500 id = 4 }
      name  = "41e Division Cuirassée de Réserve"
      type  = light_armor
      model = 1
    }
    division =
    { id       = { type = 13500 id = 5 }
      name     = "25e Div. d'Infanterie Motorisée"
      strength = 70
      type     = infantry
      model    = 1
      extra    = armored_car
    }
  }
  landunit =
  { id       = { type = 13500 id = 6 }
    name     = "1ère Armée"
    location = 63
    division =
    { id    = { type = 13500 id = 7 }
      name  = "1ère Div. Légère Motorisée"
      type  = infantry
      model = 1
      extra = armored_car
    }
    division =
    { id    = { type = 13500 id = 8 }
      name  = "1ère Division d'Infanterie"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id    = { type = 13500 id = 9 }
      name  = "2e Division Cuirassée de Réserve"
      type  = light_armor
      model = 1
    }
    division =
    { id    = { type = 13500 id = 10 }
      name  = "12e Div. d'Infanterie Motorisée"
      type  = infantry
      model = 1
      extra = armored_car
    }
    division =
    { id    = { type = 13500 id = 11 }
      name  = "2e Div. d'Infanterie Nord-Africaine"
      type  = infantry
      extra = anti_tank
    }
  }
  landunit =
  { id       = { type = 13500 id = 12 }
    name     = "Armée des Alpes"
    location = 527
    division =
    { id   = { type = 13500 id = 13 }
      name = "65e Div. d'Infanterie de Montagne"
      type = bergsjaeger
    }
    division =
    { id   = { type = 13500 id = 14 }
      name = "64e Div. d'Infanterie de Montagne"
      type = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 13500 id = 15 }
    name     = "XIX Région Militaire"
    location = 949
    division =
    { id   = { type = 13500 id = 16 }
      name = "85e Div. d'Infanterie d'Afrique"
      type = infantry
    }
    division =
    { id       = { type = 13500 id = 17 }
      name     = "182e Div. d'Infanterie d'Afrique"
      strength = 60
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 13500 id = 18 }
    name     = "Troupes du Maroc"
    location = 959
    division =
    { id       = { type = 13500 id = 19 }
      name     = "3e Division Marocaine"
      strength = 60
      type     = infantry
      extra    = anti_tank
    }
  }
  landunit =
  { id       = { type = 13500 id = 20 }
    name     = "9e Armée"
    location = 64
    division =
    { id   = { type = 13500 id = 21 }
      name = "4e Division d'Infanterie"
      type = infantry
    }
    division =
    { id    = { type = 13500 id = 22 }
      name  = "1ère Div. Légère de Cavalerie"
      type  = cavalry
      model = 1
    }
    division =
    { id       = { type = 13500 id = 23 }
      name     = "1ère Div. d'Infanterie Motorisée"
      strength = 70
      type     = infantry
      model    = 1
      extra    = armored_car
    }
    division =
    { id    = { type = 13500 id = 24 }
      name  = "18e Division d'Infanterie"
      type  = infantry
      extra = anti_air
    }
  }
  landunit =
  { id       = { type = 13500 id = 25 }
    name     = "2e Armée"
    location = 72
    division =
    { id   = { type = 13500 id = 26 }
      name = "2e Div. Légère de Cavalerie"
      type = cavalry
    }
    division =
    { id    = { type = 13500 id = 27 }
      name  = "71e Division d'Infanterie"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id       = { type = 13500 id = 28 }
      name     = "41e Division d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id   = { type = 13500 id = 29 }
      name = "1ère Div. d'Infanterie Coloniale"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 13500 id = 30 }
    name     = "Armée de Tunisie"
    location = 939
    division =
    { id       = { type = 14000 id = 31 }
      name     = "QG Armée d'Afrique"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 13500 id = 32 }
      name     = "83e Div. d'Infanterie d'Afrique"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
    division =
    { id   = { type = 13500 id = 33 }
      name = "81e Div. d'Infanterie d'Afrique"
      type = infantry
    }
    division =
    { id       = { type = 13500 id = 34 }
      name     = "6e Division Légère de Cavalerie"
      strength = 65
      type     = cavalry
    }
  }
  landunit =
  { id       = { type = 13500 id = 35 }
    name     = "3e Armée"
    location = 53
    division =
    { id       = { type = 13500 id = 36 }
      name     = "3e Div. Légère de Cavalerie"
      strength = 75
      type     = cavalry
    }
    division =
    { id   = { type = 13500 id = 37 }
      name = "6e Division d'Infanterie"
      type = infantry
    }
    division =
    { id   = { type = 13500 id = 38 }
      name = "8e Division d'Infanterie"
      type = infantry
    }
    division =
    { id    = { type = 13500 id = 39 }
      name  = "3e Div. d'Infanterie Nord-Africaine"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id   = { type = 13500 id = 40 }
      name = "26e Division d'Infanterie"
      type = infantry
    }
    division =
    { id   = { type = 13500 id = 41 }
      name = "42e Division d'Infanterie"
      type = infantry
    }
    division =
    { id    = { type = 13500 id = 42 }
      name  = "20e Division d'Infanterie"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 13500 id = 43 }
    name     = "Troupes d'Indochine"
    location = 1337
    division =
    { id       = { type = 13500 id = 44 }
      name     = "Division du Tonkin"
      strength = 65
      type     = infantry
    }
    division =
    { id       = { type = 13500 id = 45 }
      name     = "Division de Cochinchine-Cambodge"
      strength = 60
      type     = infantry
      extra    = engineer
    }
  }
  landunit =
  { id       = { type = 13500 id = 46 }
    name     = "Corps Expéditionnaire"
    location = 1037
    division =
    { id       = { type = 13500 id = 47 }
      name     = "1ère Légère d`Infanterie"
      strength = 100
      type     = infantry
      model    = 1
    }
    division =
    { id       = { type = 13500 id = 48 }
      name     = "1ère/2e de Chasseurs Montagne"
      strength = 100
      type     = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 13500 id = 49 }
    name     = "4e Armée"
    location = 316
    division =
    { id       = { type = 13500 id = 50 }
      name     = "11e Division d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id   = { type = 13500 id = 51 }
      name = "45e Division d'Infanterie"
      type = infantry
    }
    division =
    { id    = { type = 13500 id = 52 }
      name  = "52e Div. d'Infanterie d'Afrique"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 13500 id = 53 }
    name     = "5e Armée"
    location = 366
    division =
    { id       = { type = 13500 id = 54 }
      name     = "24e Division d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id   = { type = 13500 id = 55 }
      name = "31e Div. d'Infanterie de Montagne"
      type = bergsjaeger
    }
    division =
    { id    = { type = 13500 id = 56 }
      name  = "70e Division d'Infanterie"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id    = { type = 13500 id = 57 }
      name  = "30e Division d'Infanterie"
      type  = infantry
      extra = anti_tank
    }
  }
  landunit =
  { id       = { type = 13500 id = 58 }
    name     = "8e Armée"
    location = 73
    division =
    { id       = { type = 13500 id = 60 }
      name     = "QG Ligne Maginot"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 13500 id = 61 }
      name     = "13e Division d'Infanterie"
      strength = 70
      type     = infantry
      extra    = anti_tank
    }
    division =
    { id       = { type = 13500 id = 62 }
      name     = "19e Division d'Infanterie"
      strength = 70
      type     = infantry
    }
    division =
    { id   = { type = 13500 id = 59 }
      name = "54e Division d'Infanterie"
      type = infantry
    }
  }
  # ######################################
  # ####### France Navy OOB ##############
  # ######################################
  navalunit =
  { id       = { type = 13500 id = 63 }
    name     = "1ère Flotte de la France"
    location = 32
    base     = 32
    division =
    { id            = { type = 13500 id = 64 }
      name          = "Béarn"
      type          = carrier
      model         = 1
      extra         = cag
      brigade_model = 1
    }
    division =
    { id    = { type = 13500 id = 65 }
      name  = "Algérie"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_anti_air_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division =
    { id    = { type = 13500 id = 66 }
      name  = "Primauguet"
      type  = light_cruiser
      model = 1
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 13500 id = 67 }
      name  = "Duguay-Trouin"
      type  = light_cruiser
      model = 1
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 13500 id = 68 }
      name  = "Lamotte-Picquet"
      type  = light_cruiser
      model = 1
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 13500 id = 69 }
      name  = "La Galissonnière"
      type  = light_cruiser
      model = 3
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division =
    { id    = { type = 13500 id = 70 }
      name  = "1ère Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 13500 id = 71 }
      name  = "2e Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
    division =
    { id    = { type = 13500 id = 72 }
      name  = "3e Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
  }
  navalunit =
  { id       = { type = 13500 id = 73 }
    name     = "2e Flotte de la France"
    location = 364
    base     = 364
    division =
    { id    = { type = 13500 id = 74 }
      name  = "Courbet"
      type  = battleship
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = none
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 13500 id = 75 }
      name  = "Paris"
      type  = battleship
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = none
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 13500 id = 76 }
      name  = "Suffren"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_anti_air_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division =
    { id    = { type = 13500 id = 77 }
      name  = "Dusquesne"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_anti_air_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 13500 id = 78 }
      name  = "Pluton"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 13500 id = 79 }
      name  = "Jeanne d'Arc"
      type  = light_cruiser
      model = 1
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division =
    { id    = { type = 13500 id = 80 }
      name  = "4e Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
    division =
    { id    = { type = 13500 id = 81 }
      name  = "5e Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
    division =
    { id    = { type = 13500 id = 82 }
      name  = "6e Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
  }
  navalunit =
  { id       = { type = 13500 id = 83 }
    name     = "3e Flotte de la France"
    location = 949
    base     = 949
    division =
    { id    = { type = 13500 id = 84 }
      name  = "Ocean"
      type  = battleship
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = none
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }         # Renamed from Jean Bart 1936
    division =
    { id    = { type = 13500 id = 85 }
      name  = "Bretagne"
      type  = battleship
      model = 1
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      extra4 = none
      extra5 = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 13500 id = 86 }
      name  = "Foch"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_anti_air_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division =
    { id    = { type = 13500 id = 87 }
      name  = "Tourville"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_anti_air_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 13500 id = 88 }
      name  = "7e Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 2
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 13500 id = 89 }
      name  = "8e Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 2
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 13500 id = 90 }
      name  = "9e Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 2
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 13500 id = 91 }
      name  = "10e Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 2
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit =
  { id       = { type = 13500 id = 92 }
    name     = "4e Flotte de la France"
    location = 32
    base     = 32
    division =
    { id    = { type = 13500 id = 93 }
      name  = "Lorraine"
      type  = battleship
      model = 1
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      extra4 = naval_anti_air_l
      extra5 = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 1
      brigade_model5 = 0
    }
    division =
    { id    = { type = 13500 id = 94 }
      name  = "Provence"
      type  = battleship
      model = 1
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      extra4 = none
      extra5 = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 13500 id = 95 }
      name  = "Colbert"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_anti_air_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division =
    { id    = { type = 13500 id = 96 }
      name  = "Dupleix"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_anti_air_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division =
    { id    = { type = 13500 id = 97 }
      name  = "Emile Bertin"
      type  = light_cruiser
      model = 2
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division =
    { id    = { type = 13500 id = 98 }
      name  = "11e Flotille de Contre-torpilleurs"
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit =
  { id       = { type = 13500 id = 99 }
    name     = "1ère Flotte de Sous-marins"
    location = 364
    base     = 364
    division =
    { id    = { type = 13500 id = 100 }
      name  = "1ère Flotille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 101 }
      name  = "2e Flotille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 102 }
      name  = "3e Flotille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 103 }
      name  = "4e Flotille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 104 }
      name  = "5e Flotille de Sous-Marins"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 13500 id = 105 }
    name     = "2e Flotte de Sous-marins"
    location = 364
    base     = 364
    division =
    { id    = { type = 13500 id = 106 }
      name  = "6e Flotille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 107 }
      name  = "7e Flotille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 108 }
      name  = "8e Flotille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 109 }
      name  = "9e Flotille de Sous-Marins"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 13500 id = 110 }
      name  = "10e Flotille de Sous-Marins"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 120 }
    name     = "3e Flotte de Sous-marins"
    location = 949
    base     = 949
    division =
    { id    = { type = 13500 id = 121 }
      name  = "11e Flotille de Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 122 }
      name  = "12e Flotille de Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 123 }
      name  = "13e Flotille de Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 124 }
      name  = "14e Flotille de Sous-Marins"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 13500 id = 125 }
      name  = "15e Flotille de Sous-Marins"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 13500 id = 126 }
    location = 1337
    base     = 1337
    name     = "Transport Expéditionnaire"
    division =
    { id   = { type = 13500 id = 127 }
      name = "1ère Flotille de Convois"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 128 }
      name = "2e Flotille de Convois"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 129 }
      name = "3e Flotille de Convois"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 13500 id = 130 }
    location = 364
    base     = 364
    name     = "Transport Général"
    division =
    { id   = { type = 13500 id = 131 }
      name = "4e Flotille de Convois"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 132 }
      name = "5e Flotille de Convois"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 133 }
      name = "6e Flotille de Convois"
      type = transport
    }
    division =
    { id   = { type = 13500 id = 134 }
      name = "7e Flotille de Convois"
      type = transport
    }
  }
  # ##################################
  # ######## France Air OOB ##########
  # ##################################
  airunit =
  { id       = { type = 13500 id = 135 }
    name     = "1ère Groupe de Bombardement"
    location = 56
    base     = 56
    division =
    { id       = { type = 13500 id = 136 }
      name     = "Groupe de Bombardement Tactique 1"
      strength = 100
      type     = tactical_bomber
    }
    division =
    { id       = { type = 13500 id = 137 }
      name     = "Groupe de Bombardement Tactique 2"
      strength = 100
      type     = tactical_bomber
    }
    division =
    { id       = { type = 13500 id = 138 }
      name     = "Groupe de Bombardement Tactique 3"
      strength = 100
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 949
    base     = 949
    id       = { type = 13500 id = 139 }
    name     = "4e Groupe de Bombardement"
    division =
    { id       = { type = 13500 id = 140 }
      name     = "Groupe de Bombardement Tactique 6"
      strength = 100
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 364
    base     = 364
    id       = { type = 13500 id = 141 }
    name     = "5e Groupe de Bombardement"
    division =
    { id       = { type = 13500 id = 142 }
      name     = "Groupe de Bombardement Tactique 7"
      strength = 100
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 56
    base     = 56
    id       = { type = 13500 id = 143 }
    name     = "1ère Groupe de Chasse"
    division =
    { id       = { type = 13500 id = 144 }
      name     = "Groupe de Chasse 24"
      strength = 100
      type     = interceptor
      model    = 1
    }
    division =
    { id       = { type = 13500 id = 145 }
      name     = "Groupe de Chasse 21"
      strength = 100
      type     = interceptor
      model    = 1
    }
  }
  airunit =
  { location = 364
    base     = 364
    id       = { type = 13500 id = 146 }
    name     = "3e Groupe de Chasse"
    division =
    { id       = { type = 13500 id = 147 }
      name     = "Groupe de Chasse 23"
      strength = 100
      type     = interceptor
    }
  }
  # #################################
  # Naval units under construction
  # #################################
  division_development =
  { name  = "Dunkerque"
    type  = battlecruiser
    model = 3
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      extra4 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 1
    cost  = 5.5
    id    = { type = 13500 id = 148 }
    date  = { year = 1937 month = april day = 1 }
  }
  division_development =
  { name  = "Strasbourg"
    type  = battlecruiser
    model = 3
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      extra4 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 1
    cost  = 5.5
    id    = { type = 13500 id = 149 }
    date  = { year = 1939 month = april day = 1 }
  }
  division_development =
  { name  = "Richelieu"
    type  = battleship
    model = 2
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_spotter_l
      extra4 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 1
    cost  = 5.4
    id    = { type = 13500 id = 150 }
    date  = { year = 1939 month = september day = 1 }
  }
  division_development =
  { name  = "Georges Leygues"
    type  = light_cruiser
    model = 3
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 1
    cost  = 2.9
    id    = { type = 13500 id = 151 }
    date  = { year = 1937 month = april day = 1 }
  }
  division_development =
  { name  = "Gloire"
    type  = light_cruiser
    model = 3
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 1
    cost  = 2.9
    id    = { type = 13500 id = 152 }
    date  = { year = 1937 month = april day = 1 }
  }
  division_development =
  { name  = "Jean de Vienne"
    type  = light_cruiser
    model = 3
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 1
    cost  = 2.9
    id    = { type = 13500 id = 153 }
    date  = { year = 1937 month = january day = 1 }
  }
  division_development =
  { name  = "Marseillaise"
    type  = light_cruiser
    model = 3
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 1
    cost  = 2.9
    id    = { type = 13500 id = 154 }
    date  = { year = 1937 month = april day = 1 }
  }
  division_development =
  { name  = "Montcalm"
    type  = light_cruiser
    model = 3
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 1
    cost  = 2.9
    id    = { type = 13500 id = 155 }
    date  = { year = 1937 month = april day = 1 }
  }
}
