
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
  supplypool = 100
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
  rarematerialspool = 30
  supplypool = 20
  oilpool    = 1
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Saigon
province = { id = 1692 rarematerialspool = 9 supplypool = 1 } # Noumea
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
  peacetime_ic_mod       = 0.9
  capital                = 56
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 461
  oil                    = 500
  supplies               = 979
  money                  = 50
  consumer = 0.2500 
  supply = 0.1900 
  production = 0.5600 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 457.8 # 476 - building queue
  transports             = 219
  escorts                = 60
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = AUS value = -10 }
    relation = { tag = ALB value = 1 }
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
    relation = { tag = NOR value = 3 }
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
  nationalprovinces      = { 18 32 33 34 35 36 37 38 39 40 41 42 43 44 53 54 55 56 57 58 59 60 61 62 63 64 72 73 
							 316 317 318 319 320 321 322 323 324 325 326 327 328 
							 358 359 360 361 362 363 364 365 366 367 527 528 529
                           }
  # Metropolitan France
  ownedprovinces         = { 18 32 33 34 35 36 37 38 39 40 41 42 43 44 53 54 55 56 57 58 59 60 61 62 63 64 72 73
							 316 317 318 319 320 321 322 323 324 325 326 327 328
                             358 359 360 361 362 363 364 365 366 367 527 528 529
                             875 898 899 934 935 936 937 938 939 940 941 942 943 944 945 946 947 948 949 950
							 951 952 953 956 958 959 960 966 968 969 970 973 974 975 976 977 978 979 980 981
							 984 985 986 987 989 990 991 993 994 995 996 997 998
							 1003 1004 1005 1006 1013 1014 1037 1070 1075 1076 1077 1078 1079 1080 1081 1082 1083
							 1084 1086 1087 1088 1089 1092 1093 1134 1135 1137 1306 1326 1328 1329 1332 1333 1334
							 1335 1336 1337 1338 1339 1340 1341 1687 1688 1689 1690 1691 1692 1751 1792 1793 1794
							 1795 1861 1862 1863
                           }
  # Togoland
  # Metropolitan France
  controlledprovinces    = { 18 32 33 34 35 36 37 38 39 40 41 42 43 44 53 54 55 56 57 58 59 60 61 62 63 64 72 73
                             316 317 318 319 320 321 322 323 324 325 326 327 328
                             358 359 360 361 362 363 364 365 366 367 527 528 529
							 875 898 899 934 935 936 937 938 939 940 941 942 943 944 945 946 947 948 949 950
							 951 952 953 956 959 958 960 966 968 969 970 973 974 975 976 977 978 979 980 981
							 984 985 986 987 989 990 991 993 994 995 996 997 998
							 1003 1004 1005 1006 1013 1014 1037 1070 1075 1076 1077 1078 1079 1080 1081 1082 1083
							 1084 1086 1087 1088 1089 1092 1093 1134 1135 1137 1306 1326 1328 1329 1332 1333 1334
							 1335 1336 1337 1338 1339 1340 1341 1687 1688 1689 1690 1691 1692 1751 1792 1793 1794
							 1795 1861 1862 1863
                           }
  # FRA 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 4130 2150 2010 2020 2030 2290 2300 2310 2040 2450 2460 2510 1010 1020 1190 1200 1110 
                             2400 1310 5010 5020 5050 5080 5090 5190 5200 5310 5320 5470 5480 9010 9020 9030 9040 6010 6030 6110 
                             6120 8010 8020 8030 8040 8050 8070 8100 3010 3020 3030 3070 3080 3090 3100 3130 3140 3150 3190 3200 
                             3210 3220 3250 3260 3270 3280 3320 3330 3400 3410 3420 14000
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
   convoy = { 
		id = { type = 13500 id = 148 } 
		istradeconvoy = no 
		transports = 30 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = no 
		supplies = no 
		path = { 1337 2155 2152 2145 2144 2077 2076 2053 2048 2049 2035 2584 2459 2458 2457 2456 2455 2453 2454 2451 2442 2440 2437 2435 364 } 
		} 
	convoy = { 
		id = { type = 13500 id = 149 } 
		istradeconvoy = no 
		transports = 30 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = no 
		supplies = no 
		path = { 1692 2107 1977 1979 1983 1984 1989 1992 1994 1999 2001 2500 2548 2549 2547 2295 2594 2300 2593 2429 2430 2431 2432 2433 2435 364 } 
		} 
	convoy = { 
		id = { type = 13500 id = 173 } 
		trade_id = { type = 16384 id = 303 } 
		istradeconvoy = yes 
		transports = 21 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = yes 
		supplies = no 
		path = { 364 2435 2433 2432 2431 2430 2429 2593 2304 2309 2308 2543 2577 2518 2520 2522 804 } 
		} 
	province_development = { 
		id = { type = 13500 id = 158 } 
		name = "" 
		progress = 0.0000 
		location = 56 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 159 } 
		name = "" 
		progress = 0.0000 
		location = 528 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 160 } 
		name = "" 
		progress = 0.0000 
		location = 44 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 161 } 
		name = "" 
		progress = 0.0000 
		location = 364 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 162 } 
		name = "" 
		progress = 0.0000 
		location = 359 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 163 } 
		name = "" 
		progress = 0.0000 
		location = 33 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 164 } 
		name = "" 
		progress = 0.0000 
		location = 35 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 165 } 
		name = "" 
		progress = 0.0000 
		location = 325 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 166 } 
		name = "" 
		progress = 0.0000 
		location = 72 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 167 } 
		name = "" 
		progress = 0.0000 
		location = 73 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 168 } 
		name = "" 
		progress = 0.0000 
		location = 316 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 169 } 
		name = "" 
		progress = 0.0000 
		location = 362 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 170 } 
		name = "" 
		progress = 0.0000 
		location = 57 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 171 } 
		name = "" 
		progress = 0.0000 
		location = 323 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 172 } 
		name = "" 
		progress = 0.0000 
		location = 318 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1536 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 174 } 
		name = "" 
		progress = 0.0000 
		location = 1692 
		cost = 2.0000 
		date = { 
			year = 1952 
			month = october 
			day = 18 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2420 
		days_for_first = 240 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 175 } 
		name = "" 
		progress = 0.0000 
		location = 1338 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = october 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2125 
		days_for_first = 192 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 176 } 
		name = "" 
		progress = 0.0000 
		location = 1335 
		cost = 2.0000 
		date = { 
			year = 1950 
			month = october 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2125 
		days_for_first = 240 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 177 } 
		name = "" 
		progress = 0.0000 
		location = 56 
		cost = 5.0000 
		date = { 
			year = 1941 
			month = february 
			day = 2 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 9 
		done = 0 
		days = 2592 
		days_for_first = 288 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = ic 
		} 
	province_development = { 
		id = { type = 13500 id = 178 } 
		name = "" 
		progress = 0.0000 
		location = 528 
		cost = 5.0000 
		date = { 
			year = 1940 
			month = october 
			day = 18 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 6 
		done = 0 
		days = 1728 
		days_for_first = 288 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 13500 id = 179 } 
		name = "" 
		progress = 0.0000 
		location = 316 
		cost = 5.0000 
		date = { 
			year = 1940 
			month = october 
			day = 18 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 6 
		done = 0 
		days = 1728 
		days_for_first = 288 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 13500 id = 180 } 
		name = "" 
		progress = 0.0000 
		location = 365 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 1536 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 181 } 
		name = "" 
		progress = 0.0000 
		location = 360 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 800 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 182 } 
		name = "" 
		progress = 0.0000 
		location = 55 
		cost = 2.0000 
		date = { 
			year = 1938 
			month = october 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 800 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 183 } 
		name = "" 
		progress = 0.0000 
		location = 54 
		cost = 2.0000 
		date = { 
			year = 1938 
			month = march 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 800 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 184 } 
		name = "" 
		progress = 0.0000 
		location = 39 
		cost = 2.0000 
		date = { 
			year = 1938 
			month = march 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 800 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 13500 id = 185 } 
		name = "" 
		progress = 0.0000 
		location = 41 
		cost = 2.0000 
		date = { 
			year = 1938 
			month = march 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 800 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	convoy_development = { 
		id = { type = 13500 id = 186 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1938 
			month = june 
			day = 6 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 15 
		done = 0 
		days = 1 
		days_for_first = 72 
		gearing_bonus = 0.0000 
		type = transports 
		} 
	convoy_development = { 
		id = { type = 13500 id = 187 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1938 
			month = june 
			day = 6 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 15 
		done = 0 
		days = 1 
		days_for_first = 72 
		gearing_bonus = 0.0000 
		type = transports 
		} 
	convoy_development = { 
		id = { type = 13500 id = 188 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 2.0000 
		date = { 
			year = 1937 
			month = september 
			day = 0 
			hour = 0 
			} 
		manpower = 0.6000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 1 
		days_for_first = 72 
		gearing_bonus = 0.0000 
		type = escorts 
		} 
	convoy_development = { 
		id = { type = 13500 id = 189 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 2.0000 
		date = { 
			year = 1937 
			month = september 
			day = 0 
			hour = 0 
			} 
		manpower = 0.6000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 1 
		days_for_first = 72 
		gearing_bonus = 0.0000 
		type = escorts 
		} 
	province_development = { 
		id = { type = 13500 id = 190 } 
		name = "" 
		progress = 2.0000 
		location = 317 
		cost = 2.0000 
		date = { 
			year = 1936 
			month = september 
			day = 26 
			hour = 0 
			} 
		manpower = 0.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 4 
		done = 0 
		days = 240 
		days_for_first = 72 
		gearing_bonus = 0.0000 
		type = air_base 
		} 
	province_development = { 
		id = { type = 13500 id = 191 } 
		name = "" 
		progress = 2.0000 
		location = 1792 
		cost = 2.0000 
		date = { 
			year = 1936 
			month = september 
			day = 26 
			hour = 0 
			} 
		manpower = 0.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 4 
		done = 0 
		days = 240 
		days_for_first = 72 
		gearing_bonus = 0.0000 
		type = air_base 
		} 
	province_development = { 
		id = { type = 13500 id = 192 } 
		name = "" 
		progress = 2.0000 
		location = 55 
		cost = 2.0000 
		date = { 
			year = 1936 
			month = september 
			day = 26 
			hour = 0 
			} 
		manpower = 0.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 4 
		done = 0 
		days = 240 
		days_for_first = 72 
		gearing_bonus = 0.0000 
		type = air_base 
		} 
	division_development = { 
		id = { type = 13500 id = 152 } 
		name = "Richelieu" 
		progress = 0.0000 
		location = 0 
		cost = 6.6918 
		date = { 
			year = 1938 
			month = february 
			day = 28 
			hour = 0 
			} 
		manpower = 2.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0412 
		size = 2 
		done = 0 
		days = 1 
		days_for_first = 408 
		gearing_bonus = 0.0000 
		type = battleship 
		extra = none 
		extra1 = naval_sa_l 
		extra2 = naval_fire_controll_l 
		extra3 = naval_spotter_l 
		extra4 = naval_anti_air_l 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 1 
		brigade_model4 = 1 
		} 
	division_development = { 
		id = { type = 13500 id = 150 } 
		name = "Dunkerque" 
		progress = 0.0000 
		location = 0 
		cost = 5.1382 
		date = { 
			year = 1936 
			month = december 
			day = 23 
			hour = 0 
			} 
		manpower = 1.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.9458 # 0.6937
		size = 2 
		done = 0 
		days = 1 
		days_for_first = 352 
		gearing_bonus = 0.0000 
		type = battlecruiser 
		extra = none 
		extra1 = naval_sa_l 
		extra2 = naval_fire_controll_l 
		extra3 = naval_spotter_l 
		extra4 = naval_anti_air_l 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 1 
		brigade_model4 = 1 
		} 
#	division_development = { 
#		id = { type = 13500 id = 151 } 
#		name = "Strasbourg" 
#		progress = 0.0000 
#		location = 0 
#		cost = 5.1382 
#		date = { 
#			year = 1936 
#			month = september 
#			day = 23 
#			hour = 0 
#			} 
#		manpower = 1.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.2521 
#		size = 1 
#		done = 0 
#		days = 1 
#		days_for_first = 352 
#		gearing_bonus = 0.0000 
#		type = battlecruiser 
#		extra = none 
#		extra1 = naval_sa_l 
#		extra2 = naval_fire_controll_l 
#		extra3 = naval_spotter_l 
#		extra4 = naval_anti_air_l 
#		model = 3 
#		brigade_model = 0 
#		brigade_model1 = 1 
#		brigade_model2 = 1 
#		brigade_model3 = 1 
#		brigade_model4 = 1 
#		} 
	division_development = { 
		id = { type = 13500 id = 155 } 
		name = "Jean de Vienne" 
		progress = 0.0000 
		location = 0 
		cost = 4.3459 
		date = { 
			year = 1936 
			month = june 
			day = 23 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.9162 # 0.7843
		size = 2 
		done = 0 
		days = 1 
		days_for_first = 168 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = naval_anti_air_s 
		extra2 = naval_spotter_s 
		extra3 = none 
		extra4 = none 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 13500 id = 154 } 
		name = "Gloire" 
		progress = 0.0000 
		location = 0 
		cost = 4.3459 
		date = { 
			year = 1936 
			month = march 
			day = 18 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.5326 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 168 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = naval_anti_air_s 
		extra2 = naval_spotter_s 
		extra3 = none 
		extra4 = none 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 13500 id = 153 } 
		name = "Georges Leygues" 
		progress = 0.0000 
		location = 0 
		cost = 4.3459 
		date = { 
			year = 1936 
			month = february 
			day = 12 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.7489 # 0.5489
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 168 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = naval_anti_air_s 
		extra2 = naval_spotter_s 
		extra3 = none 
		extra4 = none 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 13500 id = 156 } 
		name = "Marseillaise" 
		progress = 0.0000 
		location = 0 
		cost = 4.3459 
		date = { 
			year = 1936 
			month = february 
			day = 11 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.7522 # 0.5522
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 168 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = naval_anti_air_s 
		extra2 = naval_spotter_s 
		extra3 = none 
		extra4 = none 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
#	division_development = { 
#		id = { type = 13500 id = 157 } 
#		name = "Montcalm" 
#		progress = 0.0000 
#		location = 0 
#		cost = 4.3459 
#		date = { 
#			year = 1936 
#			month = march 
#			day = 18 
#			hour = 0 
#			} 
#		manpower = 1.4000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.5319 
#		size = 1 
#		done = 0 
#		days = 1 
#		days_for_first = 168 
#		gearing_bonus = 0.0000 
#		type = light_cruiser 
#		extra = none 
#		extra1 = naval_anti_air_s 
#		extra2 = naval_spotter_s 
#		extra3 = none 
#		extra4 = none 
#		model = 3 
#		brigade_model = 0 
#		brigade_model1 = 1 
#		brigade_model2 = 1 
#		brigade_model3 = 0 
#		brigade_model4 = 0 
#		}
}
