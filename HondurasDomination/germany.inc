
##############################
# Country definition for GER #
##############################

province = { id = 66 landfort = 1 } # Aachen
province =
{ id            = 67
  synthetic_oil = 1
  anti_air      = 3
  air_base      = { size = 4 current_size = 4 }
}            # Essen
province = { id = 74 landfort = 1 anti_air = 2 } # Saarbrücken
province = { id = 75 landfort = 1 synthetic_oil = 1 } # Cologne
province = { id = 76 anti_air = 2 } # Dortmund
province =
{ id         = 80
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Wilhelmshafen
province =
{ id       = 82
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Kassel
province = { id = 88 anti_air = 2 } # Hamburg
province = { id = 89 anti_air = 1 } # Lübeck
province =
{ id         = 90
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Kiel
province =
{ id         = 296
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Rostock
province = { id = 298 anti_air = 2 } # Magdeburg
province =
{ id       = 300
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Berlin
province = { id = 302 synthetic_oil = 1 } # Stettin
province = { id = 304 supplypool = 100 } # Elbing
province = { id = 310 anti_air = 1 synthetic_oil = 1 synthetic_rares = 1 } # Leipzig
province = { id = 312 anti_air = 1 } # Nuremberg
province =
{ id       = 313
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Frankfurt-am-Main
province =
{ id       = 314
  landfort = 1
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Stuttgart
province = { id = 315 landfort = 1 } # Freiburg
province =
{ id       = 376
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Munich
province =
{ id       = 473
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Breslau
province =
{ id         = 510
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Königsberg

#####################
# Country main data #
#####################

country =
{ tag                    = GER
  peacetime_ic_mod       = 0.9
  capital                = 300
  manpower               = 1800
  transports             = 160
  escorts                = 30
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 70
  diplomacy =
  { relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 1 }
    relation =
    { tag        = AUS
      value      = 100
      guaranteed = { day = 30 month = december year = 1932 }
    }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation =
    { tag        = BUL
      value      = 25
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation =
    { tag        = CZE
      value      = -25
      guaranteed = { day = 30 month = december year = 1932 }
    }
    relation = { tag = ENG value = 1 }
    relation =
    { tag        = DEN
      value      = 25
      guaranteed = { day = 30 month = december year = 1932 }
    }
    relation = { tag = EST value = 10 }
    relation =
    { tag        = FIN
      value      = 25
      guaranteed = { day = 22 month = august year = 1934 }
    }
    relation = { tag = FRA value = -35 }
    relation = { tag = GRE value = 15 }
    relation = { tag = HOL value = 1 }
    relation = { tag = HUN value = 100 }
    relation = { tag = IRE value = 15 }
    relation = { tag = IRQ value = 25 }
    relation =
    { tag        = ITA
      value      = 50
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 1 }
    relation =
    { tag        = POL
      value      = -10
      guaranteed = { day = 30 month = december year = 1932 }
    }
    relation = { tag = POR value = 75 }
    relation =
    { tag        = ROM
      value      = 50
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation = { tag = SAF value = 1 }
    relation =
    { tag        = SCH
      value      = 50
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = -50 }
    relation =
    { tag        = SWE
      value      = 50
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation =
    { tag        = TUR
      value      = 10
      guaranteed = { day = 30 month = december year = 1935 }
    }
    relation = { tag = USA value = -10 }
    relation = { tag = YEM value = 1 }
    relation =
    { tag        = YUG
      value      = 50
      guaranteed = { day = 30 month = december year = 1932 }
    }
  }
  SpyInfo                = { country = "GER" NumberOfSpies = 5 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 4 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 2 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 3 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 5 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }
  nationalprovinces      = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313
                             314 315 374 375 376 473 482 510 72  73  316 71 
                           }
  ownedprovinces         = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313
                             314 315 374 375 376 473 482 510
                           }
  controlledprovinces    = { 66  67  74  75  76  80  81  82  83  84  85  86  87  88  89  90  296 297 298 299 300 301 302 304 308 309 310 311 312 313
                             314 315 374 375 376 473 482 510
                           }
  # Germany 1936 techs
  # ######################
  techapps               = { 1070 4010  4020  4120  4130  4250  2150  2010  2020  2030  2290  2300  2310  2320  2400  2450  2460  2510  1010  1020  1190 
                             1200  1210  1220  1110  1310  5010  5020  5080  5090  5190  5310  5470  5480  5490  5550  9010  9020  9030  9040  9050 
                             9090  6210  6220  6230  6240  6250  8010  8020  8030  8040  8050  8080  8150  8160  8170  3010  3020  3070  3080  3090 
                             3100  3130  3140  3150  3160  3190  3200  3210  3220  3250  3260  3270  3280  3320  3400  3410  3420  14000 1380  5410
                             5290 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    free_market       = 5
    freedom           = 2
    professional_army = 7
    defense_lobby     = 6
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 1 }
  headofgovernment       = { type = 9 id = 2 }
  foreignminister        = { type = 9 id = 3 }
  armamentminister       = { type = 9 id = 4 }
  ministerofsecurity     = { type = 9 id = 5 }
  ministerofintelligence = { type = 9 id = 6 }
  chiefofstaff           = { type = 9 id = 7 }
  chiefofarmy            = { type = 9 id = 8 }
  chiefofnavy            = { type = 9 id = 9 }
  chiefofair             = { type = 9 id = 10 }
  dormant_leaders        = {  293 579 } #544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573
                               #574 575 576 577 578 579
  nationalidentity = "policy_identity_frustrated" 
	socialpolicy = "policy_social_ethnic" 
	nationalculture = "policy_culture_ethnic"                              
                           
	### Germany Land OOB ###
  landunit =
  { location = 302
    name     = "II. Armeekorps"
    id       = { type = 14500 id = 37 }
    division =
    { id       = { type = 14500 id = 38 }
      name     = "2. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 39 }
      name     = "12. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 40 }
      name     = "32. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
      extra    = anti_tank
    }
  }
  landunit =
  { location = 300
    name     = "III. Armeekorps"
    id       = { type = 14500 id = 41 }
    division =
    { id       = { type = 14500 id = 42 }
      name     = "Heeresgruppe A"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 43 }
      name     = "3. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 44 }
      name     = "23. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 300
    name     = "VIII. Armeekorps"
    id       = { type = 14500 id = 45 }
    division =
    { id       = { type = 14500 id = 46 }
      name     = "8. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 47 }
      name     = "18. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 48 }
      name     = "28. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
      extra    = engineer
    }
  }
  landunit =
  { location = 314
    name     = "V. Armeekorps"
    id       = { type = 14500 id = 49 }
    division =
    { id       = { type = 14500 id = 50 }
      name     = "5. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id            = { type = 14500 id = 51 }
      name          = "25. Infanterie-Division"
      type          = infantry
      model         = 1
      strength      = 100
      extra         = artillery
      brigade_model = 3
    }
    division =
    { id       = { type = 14500 id = 52 }
      name     = "35. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 81
    name     = "VI. Armeekorps"
    id       = { type = 14500 id = 53 }
    division =
    { id       = { type = 14500 id = 54 }
      name     = "6. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 55 }
      name     = "16. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
      extra    = anti_tank
    }
    division =
    { id       = { type = 14500 id = 56 }
      name     = "26. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 313
    name     = "IX. Armeekorps"
    id       = { type = 14500 id = 57 }
    division =
    { id       = { type = 14500 id = 58 }
      name     = "9. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 59 }
      name     = "15. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
      extra    = anti_air
    }
    division =
    { id       = { type = 14500 id = 60 }
      name     = "29. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 76
    name     = "XII. Armeekorps"
    id       = { type = 14500 id = 61 }
    division =
    { id       = { type = 14500 id = 62 }
      name     = "33. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 63 }
      name     = "34. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
      extra    = engineer
    }
    division =
    { id       = { type = 14500 id = 64 }
      name     = "36. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 311
    name     = "IV. Armeekorps"
    id       = { type = 14500 id = 65 }
    division =
    { id       = { type = 14500 id = 66 }
      name     = "4. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id            = { type = 14500 id = 67 }
      name          = "14. Infanterie-Division"
      type          = infantry
      model         = 1
      strength      = 100
      extra         = artillery
      brigade_model = 3
    }
    division =
    { id       = { type = 14500 id = 68 }
      name     = "24. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 376
    name     = "VII. Armeekorps"
    id       = { type = 14500 id = 69 }
    division =
    { id       = { type = 14500 id = 70 }
      name     = "7. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 71 }
      name     = "10. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
      extra    = anti_tank
    }
    division =
    { id       = { type = 14500 id = 72 }
      name     = "17. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 73 }
      name     = "27. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 88
    name     = "X. Armeekorps"
    id       = { type = 14500 id = 74 }
    division =
    { id       = { type = 14500 id = 75 }
      name     = "20. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id            = { type = 14500 id = 76 }
      name          = "22. Infanterie-Division"
      type          = infantry
      model         = 1
      strength      = 100
      extra         = artillery
      brigade_model = 3
    }
    division =
    { id       = { type = 14500 id = 77 }
      name     = "30. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 86
    name     = "XI. Armeekorps"
    id       = { type = 14500 id = 78 }
    division =
    { id       = { type = 14500 id = 79 }
      name     = "13. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 80 }
      name     = "19. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
      extra    = anti_air
    }
    division =
    { id       = { type = 14500 id = 81 }
      name     = "31. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
  }
  landunit =
  { location = 300
    name     = "I. Panzerarmee"
    id       = { type = 14500 id = 82 }
    division =
    { id       = { type = 14500 id = 83 }
      name     = "1. Panzer-Division"
      type     = light_armor
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 14500 id = 84 }
      name     = "2. Panzer-Division"
      type     = light_armor
      model    = 0
      strength = 100
    }
    division =
    { id           = { type = 14500 id = 85 }
      name         = "3. Panzer-Division"
      type         = light_armor
      model        = 0
      strength     = 100
      organisation = 30
    }
  }
  landunit =
  { location = 510
    name     = "I. Armeekorps"
    id       = { type = 14500 id = 86 }
    division =
    { id       = { type = 14500 id = 87 }
      name     = "1. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
    division =
    { id            = { type = 14500 id = 88 }
      name          = "11. Infanterie-Division"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 3
      strength      = 100
      organisation  = 30
    }
    division =
    { id       = { type = 14500 id = 89 }
      name     = "21. Infanterie-Division"
      type     = infantry
      model    = 1
      strength = 100
    }
  }
	### Germany Navy OOB ###
  navalunit =
  { name     = "Kriegsmarine"
    id       = { type = 14500 id = 1 }
    location = 80
    base     = 80
    division =
    { id    = { type = 14500 id = 2 }
      name  = "Deutschland"
      type  = heavy_cruiser
      model = 3
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 14500 id = 3 }
      name  = "Admiral Scheer"
      type  = heavy_cruiser
      model = 3
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 14500 id = 4 }
      name  = "Nürnberg"
      type  = light_cruiser
      model = 3
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 14500 id = 5 }
      name  = "Leipzig"
      type  = light_cruiser
      model = 2
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 14500 id = 6 }
      name  = "Königsberg"
      type  = light_cruiser
      model = 2
      extra1 = naval_spotter_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 14500 id = 7 }
      name  = "Karlsruhe"
      type  = light_cruiser
      model = 2
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 14500 id = 8 }
      name  = "Köln"
      type  = light_cruiser
      model = 2
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 14500 id = 9 }
      name  = "Emden"
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = 
    { id = { type = 14500 id = 101 }
      name = "1. Torpedobootflottille"
      type = destroyer
      model = 0
    }
  }
  navalunit =
  { name     = "II. Unterseebootsflotte"
    id       = { type = 14500 id = 11 }
    location = 80
    base     = 80
    division =
    { id    = { type = 14500 id = 12 }
      name  = "2. Unterseebootsflottille"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 14500 id = 13 }
      name  = "3. Unterseebootsflottille"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { name     = "I. Unterseebootsflotte"
    id       = { type = 14500 id = 14 }
    location = 90
    base     = 90
    division =
    { id    = { type = 14500 id = 15 }
      name  = "1. Unterseebootsflottille"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { name     = "Baltische Flotte"
    id       = { type = 14500 id = 16 }
    location = 510
    base     = 510
    division =
    { id    = { type = 14500 id = 17 }
      name  = "Schleswig-Holstein"
      type  = battlecruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 1
    }
    division =
    { id    = { type = 14500 id = 18 }
      name  = "Schlesien"
      type  = battlecruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 1
    }
   division = 
    { id = { type = 14500 id = 100 }
      name = "2. Torpedobootflottille"
      type = destroyer
      model = 0
    }
  }
  # ######### Luftwaffe ##############
  airunit =
  { location = 300
    id       = { type = 14500 id = 22 }
    name     = "Luftflotte II"
    base     = 300
    division =
    { id       = { type = 14500 id = 23 }
      name     = "KG 2 'Holzhammer'"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 14500 id = 24 }
      name     = "KG 3 'Blitz'"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 14500 id = 25 }
      name     = "Kampfgeschwader 51"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id            = { type = 14500 id = 26 }
      name          = "JG 2 'Richthofen'"
      strength      = 100
      type          = interceptor
      model         = 0
    }
    division =
    { id            = { type = 14500 id = 27 }
      name          = "JG 26 'Schlageter'"
      strength      = 100
      type          = interceptor
      model         = 0
    }
  }
  airunit =
  { location = 473
    id       = { type = 14500 id = 28 }
    name     = "Luftflotte III"
    base     = 473
    division =
    { id       = { type = 14500 id = 29 }
      name     = "KG 53 'Legion Condor'"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 14500 id = 30 }
      name     = "Kampfgeschwader 25"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 14500 id = 31 }
      name     = "KG 30 'Adler'"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
  }
  airunit =
  { location = 82
    id       = { type = 14500 id = 32 }
    name     = "Luftflotte IV"
    base     = 82
    division =
    { id       = { type = 14500 id = 33 }
      name     = "KG 1 'Hindenburg'"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 14500 id = 34 }
      name     = "JG 3 'Udet'"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 376
    id       = { type = 14500 id = 35 }
    name     = "Luftflotte V"
    base     = 376
    division =
    { id       = { type = 14500 id = 36 }
      name     = "KG 4 'General Wever'"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
  }
  # ####under developement#####
  division_development =
  { name = "Gneisenau"
    type = battlecruiser
    cost = 6
    model = 3
    extra1 = naval_sa_l
    extra2 = naval_fire_controll_l
    extra3 = naval_spotter_l
    extra4 = naval_anti_air_l
    brigade_model1 = 1
    brigade_model2 = 0
    brigade_model3 = 0
    brigade_model4 = 1
    id = { type = 14500 id = 90 }
    date = { year = 1938 month = may day = 21 }
  }
  division_development =
  { name = "Scharnhorst"
    type = battlecruiser
    cost = 6
    model = 3
    extra1 = naval_sa_l
    extra2 = naval_fire_controll_l
    extra3 = naval_spotter_l
    extra4 = naval_anti_air_l
    brigade_model1 = 1
    brigade_model2 = 0
    brigade_model3 = 0
    brigade_model4 = 1
    id = { type = 14500 id = 91 }
    date = { year = 1939 month = january day = 7 }
  }
  division_development =
  { name = "Admiral Graf Spee"
    type = heavy_cruiser
    cost = 4
    model = 3
    extra1 = naval_sa_l
    extra2 = naval_fire_controll_l
    extra3 = naval_anti_air_l
    brigade_model1 = 1
    brigade_model2 = 0
    brigade_model3 = 0
    id = { type = 14500 id = 92 }
    date = { year = 1936 month = january day = 16 }
  }
  division_development =
  { name  = "1. Zerstörerflottille"
    type  = destroyer
    model = 1
    cost  = 1.6
    extra1 = naval_fire_controll_s
    brigade_model1 = 0
    id = { type = 14500 id = 93 }
    date = { year = 1936 month = march day = 6 }
  }
  division_development =
  { name  = "2. Zerstörerflottille"
    type  = destroyer
    model = 1
    cost  = 1.6
    extra1 = naval_fire_controll_s
    brigade_model1 = 0
    id = { type = 14500 id = 94 }
    date = { year = 1936 month = february day = 16 }
  }
  division_development =
  { name = "4. Unterseebootsflottille"
    type = submarine
    model = 1
    cost = 2
    id = { type = 14500 id = 95 }
    date = { year = 1936 month = march day = 1 }
  }
}