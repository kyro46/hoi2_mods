
##############################
# Country definition for GER #
##############################

province =
{ id            = 67
  synthetic_oil = 1
  anti_air      = 3
  air_base      = { size = 4 current_size = 4 }
}            # Essen
province = { id = 74 anti_air = 2 } # Saarbrücken
province = { id = 75 synthetic_oil = 1 } # Cologne
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
province = { id = 302 landfort = 1 synthetic_oil = 1 } # Stettin
province = { id = 304 landfort = 1 supplypool = 100 } # Elbing
province = { id = 308 landfort = 2 } # Küstrin
province = { id = 310 anti_air = 1 synthetic_oil = 1 synthetic_rares = 1 } # Leipzig
province = { id = 312 anti_air = 1 } # Nuremberg
province =
{ id       = 313
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Frankfurt-am-Main
province =
{ id       = 314
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Stuttgart
province =
{ id       = 376
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Munich
province =
{ id       = 473
  landfort = 1
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}            # Breslau
province = { id = 482 landfort = 1 } # Oppeln
province =
{ id         = 510
  landfort   = 2 
  anti_air   = 4
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Königsberg

#####################
# Country main data #
#####################

country =
{ tag                    = GER
#  peacetime_ic_mod       = 0.9
  capital                = 300
  manpower               = 1761.9 # 1800 - building queue
  transports             = 160
  escorts                = 30
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 70
  consumer = 0.1500 
  supply = 0.1500 
  production = 0.7000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  expense_synthetic = 0.0000 
  expense_synthetic_rares = 0.0000  
  diplomacy =
  { relation = { tag = ARG value = 75 }
    relation = { tag = ALB value = 3 }
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
    relation = { tag = CGX value = 2 }
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
    relation = { tag = LIT value = 8 }
    relation = { tag = LIB value = 10 }
	relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = NEP value = 1 }
    relation = { tag = CHI value = 24 }
	relation = { tag = SIK value = 2 }
	relation = { tag = SIA value = 2 }
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
  nationalprovinces      = { 66 67 71 72 73 74 75 76 80 81 82 83 84 85 86 87 88 89 90 
							 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 316 374 375 376 473 482 510 
                           }
  ownedprovinces         = { 66 67 74 75 76 80 81 82 83 84 85 86 87 88 89 90 
							 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 374 375 376 473 482 510
                           }
  controlledprovinces    = { 66 67 74 75 76 80 81 82 83 84 85 86 87 88 89 90 
							 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 374 375 376 473 482 510
                           }
  # Germany 1936 techs
  # ######################
  techapps               = { 1010 1020 1070 1110 1190 1200 1210 1220 1310 1380 
							 2010 2020 2030 2150 2290 2300 2310 2320 2400 2450 2460 2510 
                             3010 3020 3070 3080 3090 3100 3130 3140 3150 3160 3190 3200 3210 3220 3250 3260 3270 3280 3320 3400 3410 3420 
                             4010 4020 4120 4130 4250 
							 5010 5020 5080 5090 5100 5190 5310 5470 5480 5490 5410 5290 5550 
							 6210 6220 6230 6240 6250 14000 
							 8010 8020 8030 8040 8050 8080 8150 8160 8170 
							 9010 9020 9030 9040 9050 9090 
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
  armamentminister       = { type = 9 id = 77 }
  ministerofsecurity     = { type = 9 id = 5 }
  ministerofintelligence = { type = 9 id = 6 }
  chiefofstaff           = { type = 9 id = 7 }
  chiefofarmy            = { type = 9 id = 8 }
  chiefofnavy            = { type = 9 id = 9 }
  chiefofair             = { type = 9 id = 374 }
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
      name = "1. Torpedobootsflottille"
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
      name = "2. Torpedobootsflottille"
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
  }
  airunit =
  { location = 300
    id       = { type = 14500 id = 97 }
    name     = "I. Fliegerkorps"
    base     = 300
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
	province_development = { 
		id = { type = 14500 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 86 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = october 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 201 } 
		name = "" 
		progress = 0.0000 
		location = 75 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = october 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 210 } 
		name = "" 
		progress = 0.0000 
		location = 76 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = august 
			day = 12 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 172 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 202 } 
		name = "" 
		progress = 0.0000 
		location = 300 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = october 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 217 } 
		name = "" 
		progress = 0.0000 
		location = 310 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = october 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 204 } 
		name = "" 
		progress = 0.0000 
		location = 311 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = august 
			day = 12 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 172 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 203 } 
		name = "" 
		progress = 0.0000 
		location = 314 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = august 
			day = 12 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 172 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 208 } 
		name = "" 
		progress = 0.0000 
		location = 473 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = october 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 207 } 
		name = "" 
		progress = 0.0000 
		location = 312 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = august 
			day = 12 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 172 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 205 } 
		name = "" 
		progress = 0.0000 
		location = 482 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = june 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1357 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 206 } 
		name = "" 
		progress = 0.0000 
		location = 313 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = august 
			day = 12 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 172 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 209 } 
		name = "" 
		progress = 0.0000 
		location = 510 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = september 
			day = 1 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 143 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 211 } 
		name = "" 
		progress = 0.0000 
		location = 81 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 212 } 
		name = "" 
		progress = 0.0000 
		location = 83 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = august 
			day = 12 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 172 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 213 } 
		name = "" 
		progress = 0.0000 
		location = 376 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = august 
			day = 12 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 172 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 214 } 
		name = "" 
		progress = 0.0000 
		location = 67 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 215 } 
		name = "" 
		progress = 0.0000 
		location = 74 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = august 
			day = 12 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 172 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 216 } 
		name = "" 
		progress = 0.0000 
		location = 302 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 218 } 
		name = "" 
		progress = 0.0000 
		location = 80 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 219 } 
		name = "" 
		progress = 0.0000 
		location = 88 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 985 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 220 } 
		name = "" 
		progress = 0.0000 
		location = 298 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1916 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 221 } 
		name = "" 
		progress = 0.0000 
		location = 90 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1916 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 226 } 
		name = "" 
		progress = 0.0000 
		location = 86 
		cost = 5.0000 
		date = { 
			year = 1944 
			month = february 
			day = 25 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 12 
		done = 0 
		days = 3456 
		days_for_first = 346 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = ic 
		} 
	province_development = { 
		id = { type = 14500 id = 223 } 
		name = "" 
		progress = 0.0000 
		location = 75 
		cost = 5.0000 
		date = { 
			year = 1942 
			month = october 
			day = 16 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 3802 
		days_for_first = 346 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = ic 
		} 
	province_development = { 
		id = { type = 14500 id = 228 } 
		name = "" 
		progress = 0.0000 
		location = 76 
		cost = 5.0000 
		date = { 
			year = 1942 
			month = october 
			day = 16 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 1728 
		days_for_first = 346 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = ic 
		} 
	province_development = { 
		id = { type = 14500 id = 222 } 
		name = "" 
		progress = 0.0000 
		location = 300 
		cost = 5.0000 
		date = { 
			year = 1942 
			month = february 
			day = 11 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 9 
		done = 0 
		days = 3802 
		days_for_first = 346 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = ic 
		} 
	province_development = { 
		id = { type = 14500 id = 230 } 
		name = "" 
		progress = 0.0000 
		location = 310 
		cost = 5.0000 
		date = { 
			year = 1941 
			month = october 
			day = 6 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 6 
		done = 0 
		days = 1728 
		days_for_first = 346 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 14500 id = 225 } 
		name = "" 
		progress = 0.0000 
		location = 311 
		cost = 5.0000 
		date = { 
			year = 1941 
			month = october 
			day = 6 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 6 
		done = 0 
		days = 3802 
		days_for_first = 346 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 14500 id = 224 } 
		name = "" 
		progress = 0.0000 
		location = 314 
		cost = 5.0000 
		date = { 
			year = 1940 
			month = october 
			day = 20 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 5 
		done = 0 
		days = 3802 
		days_for_first = 346 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 14500 id = 229 } 
		name = "" 
		progress = 0.0000 
		location = 473 
		cost = 5.0000 
		date = { 
			year = 1940 
			month = october 
			day = 20 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 5 
		done = 0 
		days = 1728 
		days_for_first = 346 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 14500 id = 231 } 
		name = "" 
		progress = 0.0000 
		location = 312 
		cost = 5.0000 
		date = { 
			year = 1940 
			month = october 
			day = 20 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 5 
		done = 0 
		days = 1728 
		days_for_first = 346 
		gearing_bonus = 0.0000 
		type = ic 
		} 
#	province_development = { 
#		id = { type = 14500 id = 227 } 
#		name = "" 
#		progress = 0.0000 
#		location = 482 
#		cost = 5.0000 
#		date = { 
#			year = 1940 
#			month = october 
#			day = 20 
#			hour = 0 
#			} 
#		manpower = 1.0000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 5 
#		done = 0 
#		days = 1728 
#		days_for_first = 346 
#		gearing_bonus = 0.0000 
#		type = ic 
#		} 
	province_development = { 
		id = { type = 14500 id = 232 } 
		name = "" 
		progress = 0.0000 
		location = 296 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1916 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 233 } 
		name = "" 
		progress = 0.0000 
		location = 82 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = august 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1916 
		days_for_first = 143 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 234 } 
		name = "" 
		progress = 0.0000 
		location = 87 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1916 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 235 } 
		name = "" 
		progress = 0.0000 
		location = 309 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1916 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14500 id = 236 } 
		name = "" 
		progress = 0.0000 
		location = 66 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = august 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1916 
		days_for_first = 143 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	convoy_development = { 
		id = { type = 14500 id = 237 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1939 
			month = january 
			day = 2 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 15 
		done = 0 
		days = 1 
		days_for_first = 86 
		gearing_bonus = 0.0000 
		type = transports 
		} 
	convoy_development = { 
		id = { type = 14500 id = 238 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1939 
			month = january 
			day = 2 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 15 
		done = 0 
		days = 1 
		days_for_first = 86 
		gearing_bonus = 0.0000 
		type = transports 
		} 
	convoy_development = { 
		id = { type = 14500 id = 239 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1939 
			month = january 
			day = 2 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 15 
		done = 0 
		days = 1088 
		days_for_first = 86 
		gearing_bonus = 0.0000 
		type = transports 
		} 
	convoy_development = { 
		id = { type = 14500 id = 240 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1939 
			month = january 
			day = 2 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 15 
		done = 0 
		days = 1088 
		days_for_first = 86 
		gearing_bonus = 0.0000 
		type = transports 
		} 
	convoy_development = { 
		id = { type = 14500 id = 241 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = january 
			day = 2 
			hour = 0 
			} 
		manpower = 0.6000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 15 
		done = 0 
		days = 1 
		days_for_first = 86 
		gearing_bonus = 0.0000 
		type = escorts 
		} 
	convoy_development = { 
		id = { type = 14500 id = 242 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = january 
			day = 2 
			hour = 0 
			} 
		manpower = 0.6000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 15 
		done = 0 
		days = 1088 
		days_for_first = 86 
		gearing_bonus = 0.0000 
		type = escorts 
		} 
	province_development = { 
		id = { type = 14500 id = 243 } 
		name = "" 
		progress = 0.0000 
		location = 66 
		cost = 5.0000 
		date = { 
			year = 1936 
			month = april 
			day = 25 
			hour = 0 
			} 
		manpower = 0.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 1 
		done = 0 
		days = 115 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = land_fort 
		} 
	province_development = { 
		id = { type = 14500 id = 244 } 
		name = "" 
		progress = 0.0000 
		location = 315 
		cost = 5.0000 
		date = { 
			year = 1936 
			month = november 
			day = 27 
			hour = 0 
			} 
		manpower = 0.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 328 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = land_fort 
		} 
	province_development = { 
		id = { type = 14500 id = 245 } 
		name = "" 
		progress = 0.0000 
		location = 314 
		cost = 5.0000 
		date = { 
			year = 1936 
			month = november 
			day = 27 
			hour = 0 
			} 
		manpower = 0.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 328 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = land_fort 
		} 
	province_development = { 
		id = { type = 14500 id = 246 } 
		name = "" 
		progress = 0.0000 
		location = 74 
		cost = 5.0000 
		date = { 
			year = 1936 
			month = november 
			day = 27 
			hour = 0 
			} 
		manpower = 0.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 328 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = land_fort 
		} 
	province_development = { 
		id = { type = 14500 id = 247 } 
		name = "" 
		progress = 0.0000 
		location = 75 
		cost = 5.0000 
		date = { 
			year = 1936 
			month = november 
			day = 27 
			hour = 0 
			} 
		manpower = 0.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 328 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = land_fort 
		} 
	province_development = { 
		id = { type = 14500 id = 248 } 
		name = "" 
		progress = 0.0000 
		location = 314 
		cost = 2.0000 
		date = { 
			year = 1936 
			month = november 
			day = 18 
			hour = 0 
			} 
		manpower = 0.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 4 
		done = 0 
		days = 320 
		days_for_first = 86 
		gearing_bonus = 0.0000 
		type = air_base 
		} 
	province_development = { 
		id = { type = 14500 id = 249 } 
		name = "" 
		progress = 0.0000 
		location = 75 
		cost = 2.0000 
		date = { 
			year = 1937 
			month = august 
			day = 26 
			hour = 0 
			} 
		manpower = 0.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 8 
		done = 0 
		days = 599 
		days_for_first = 86 
		gearing_bonus = 0.0000 
		type = air_base 
		} 
#	province_development = { 
#		id = { type = 14500 id = 250 } 
#		name = "" 
#		progress = 0.0000 
#		location = 376 
#		cost = 3.0000 
#		date = { 
#			year = 1936 
#			month = august 
#			day = 4 
#			hour = 0 
#			} 
#		manpower = 0.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 4 
#		done = 0 
#		days = 399 
#		days_for_first = 58 
#		gearing_bonus = 0.0000 
#		type = flak 
#		} 
#	province_development = { 
#		id = { type = 14500 id = 251 } 
#		name = "" 
#		progress = 0.0000 
#		location = 296 
#		cost = 3.0000 
#		date = { 
#			year = 1936 
#			month = august 
#			day = 4 
#			hour = 0 
#			} 
#		manpower = 0.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 4 
#		done = 0 
#		days = 399 
#		days_for_first = 58 
#		gearing_bonus = 0.0000 
#		type = flak 
#		} 
#	province_development = { 
#		id = { type = 14500 id = 253 } 
#		name = "" 
#		progress = 0.0000 
#		location = 510 
#		cost = 3.0000 
#		date = { 
#			year = 1936 
#			month = november 
#			day = 8 
#			hour = 0 
#			} 
#		manpower = 0.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 6 
#		done = 0 
#		days = 306 
#		days_for_first = 58 
#		gearing_bonus = 0.0000 
#		type = flak 
#		} 
#	province_development = { 
#		id = { type = 14500 id = 254 } 
#		name = "" 
#		progress = 0.0000 
#		location = 83 
#		cost = 3.0000 
#		date = { 
#			year = 1936 
#			month = november 
#			day = 8 
#			hour = 0 
#			} 
#		manpower = 0.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 6 
#		done = 0 
#		days = 492 
#		days_for_first = 58 
#		gearing_bonus = 0.0000 
#		type = flak 
#		} 
#	province_development = { 
#		id = { type = 14500 id = 255 } 
#		name = "" 
#		progress = 0.0000 
#		location = 302 
#		cost = 3.0000 
#		date = { 
#			year = 1936 
#			month = november 
#			day = 8 
#			hour = 0 
#			} 
#		manpower = 0.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 6 
#		done = 0 
#		days = 492 
#		days_for_first = 58 
#		gearing_bonus = 0.0000 
#		type = flak 
#		} 
	province_development = { 
		id = { type = 14500 id = 256 } 
		name = "" 
		progress = 0.0000 
		location = 313 
		cost = 3.0000 
		date = { 
			year = 1936 
			month = december 
			day = 25 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 7 
		done = 0 
		days = 353 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
	province_development = { 
		id = { type = 14500 id = 257 } 
		name = "" 
		progress = 0.0000 
		location = 67 
		cost = 3.0000 
		date = { 
			year = 1936 
			month = december 
			day = 25 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 7 
		done = 0 
		days = 353 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
	province_development = { 
		id = { type = 14500 id = 258 } 
		name = "" 
		progress = 0.0000 
		location = 314 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = february 
			day = 12 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 8 
		done = 0 
		days = 399 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
	province_development = { 
		id = { type = 14500 id = 259 } 
		name = "" 
		progress = 0.0000 
		location = 300 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = february 
			day = 12 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 8 
		done = 0 
		days = 399 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
#	province_development = { 
#		id = { type = 14500 id = 260 } 
#		name = "" 
#		progress = 0.0000 
#		location = 473 
#		cost = 3.0000 
#		date = { 
#			year = 1937 
#			month = february 
#			day = 12 
#			hour = 0 
#			} 
#		manpower = 0.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 8 
#		done = 0 
#		days = 399 
#		days_for_first = 58 
#		gearing_bonus = 0.0000 
#		type = flak 
#		} 
	province_development = { 
		id = { type = 14500 id = 261 } 
		name = "" 
		progress = 0.0000 
		location = 76 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = february 
			day = 12 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 8 
		done = 0 
		days = 399 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
	province_development = { 
		id = { type = 14500 id = 262 } 
		name = "" 
		progress = 0.0000 
		location = 74 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = february 
			day = 12 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 8 
		done = 0 
		days = 399 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
	province_development = { 
		id = { type = 14500 id = 263 } 
		name = "" 
		progress = 0.0000 
		location = 80 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = february 
			day = 12 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 8 
		done = 0 
		days = 399 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
	province_development = { 
		id = { type = 14500 id = 252 } 
		name = "" 
		progress = 0.0000 
		location = 310 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = march 
			day = 28 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 9 
		done = 0 
		days = 446 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
	province_development = { 
		id = { type = 14500 id = 264 } 
		name = "" 
		progress = 0.0000 
		location = 312 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = march 
			day = 28 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 9 
		done = 0 
		days = 446 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
#	province_development = { 
#		id = { type = 14500 id = 265 } 
#		name = "" 
#		progress = 0.0000 
#		location = 90 
#		cost = 3.0000 
#		date = { 
#			year = 1937 
#			month = march 
#			day = 28 
#			hour = 0 
#			} 
#		manpower = 0.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 9 
#		done = 0 
#		days = 446 
#		days_for_first = 58 
#		gearing_bonus = 0.0000 
#		type = flak 
#		} 
	province_development = { 
		id = { type = 14500 id = 266 } 
		name = "" 
		progress = 0.0000 
		location = 75 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = may 
			day = 15 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 492 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
	province_development = { 
		id = { type = 14500 id = 267 } 
		name = "" 
		progress = 0.0000 
		location = 311 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = may 
			day = 15 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 492 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
#	province_development = { 
#		id = { type = 14500 id = 268 } 
#		name = "" 
#		progress = 0.0000 
#		location = 482 
#		cost = 3.0000 
#		date = { 
#			year = 1937 
#			month = may 
#			day = 15 
#			hour = 0 
#			} 
#		manpower = 0.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 10 
#		done = 0 
#		days = 492 
#		days_for_first = 58 
#		gearing_bonus = 0.0000 
#		type = flak 
#		} 
	province_development = { 
		id = { type = 14500 id = 269 } 
		name = "" 
		progress = 0.0000 
		location = 86 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = may 
			day = 15 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 492 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
	province_development = { 
		id = { type = 14500 id = 270 } 
		name = "" 
		progress = 0.0000 
		location = 81 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = may 
			day = 15 
			hour = 0 
			} 
		manpower = 0.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 492 
		days_for_first = 58 
		gearing_bonus = 0.0000 
		type = flak 
		} 
#	province_development = { 
#		id = { type = 14500 id = 271 } 
#		name = "" 
#		progress = 0.0000 
#		location = 296 
#		cost = 20.0000 
#		date = { 
#			year = 1937 
#			month = may 
#			day = 13 
#			hour = 0 
#			} 
#		manpower = 1.0000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 3 
#		done = 0 
#		days = 492 
#		days_for_first = 173 
#		gearing_bonus = 0.0000 
#		type = rocket_test 
#		} 
	division_development = { 
		id = { type = 14500 id = 96 } 
		name = "Bismarck" 
		progress = 2.0000 
		location = 300 
		cost = 8.2913 
		date = { 
			year = 1938 
			month = august 
			day = 25 
			hour = 0 
			} 
		manpower = 2.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 469 
		days_for_first = 490 
		gearing_bonus = 0.0000 
		type = battleship 
		extra = naval_anti_air_l 
		extra1 = naval_radar_l 
		extra2 = naval_fire_controll_l 
		extra3 = naval_sa_l 
		extra4 = naval_spotter_l 
		model = 3 
		brigade_model = 1 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 1 
		brigade_model4 = 0 
		} 
#   division_development = { 
#		id = { type = 14500 id = 90 } 
#		name = "Gneisenau" 
#		progress = 0.0000 
#		location = 0 
#		cost = 6.1859 
#		date = { 
#			year = 1937 
#			month = march 
#			day = 2 
#			hour = 0 
#			} 
#		manpower = 1.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 1 
#		done = 0 
#		days = 1 
#		days_for_first = 422 
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
#		brigade_model2 = 0 
#		brigade_model3 = 0 
#		brigade_model4 = 1 
#		} 
	division_development = { 
		id = { type = 14500 id = 91 } 
		name = "Scharnhorst" 
		progress = 0.0000 
		location = 0 
		cost = 6.1859 
		date = { 
			year = 1938 
			month = april 
			day = 12 
			hour = 0 
			} 
		manpower = 1.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 1 
		days_for_first = 422 
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
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 1 
		} 
	division_development = { 
		id = { type = 14500 id = 92 } 
		name = "Admiral Graf Spee" 
		progress = 0.0000 
		location = 0 
		cost = 4.4674 
		date = { 
			year = 1936 
			month = january 
			day = 1 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.9957 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 307 
		gearing_bonus = 0.0000 
		type = heavy_cruiser 
		extra = none 
		extra1 = naval_sa_l 
		extra2 = naval_fire_controll_l 
		extra3 = naval_anti_air_l 
		extra4 = none 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 14500 id = 93 } 
		name = "1. Zerstörerflottille" 
		progress = 0.0000 
		location = 0 
		cost = 3.9291 
		date = { 
			year = 1936 
			month = march 
			day = 6 
			hour = 0 
			} 
		manpower = 0.7000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.4500 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = destroyer 
		extra = none 
		extra1 = naval_fire_controll_s 
		extra2 = none 
		extra3 = none 
		extra4 = none 
		model = 1 
		brigade_model = 0 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 14500 id = 94 } 
		name = "2. Zerstörerflottille" 
		progress = 0.0000 
		location = 0 
		cost = 3.9291 
		date = { 
			year = 1936 
			month = february 
			day = 16 
			hour = 0 
			} 
		manpower = 0.7000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.6167 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = destroyer 
		extra = none 
		extra1 = naval_fire_controll_s 
		extra2 = none 
		extra3 = none 
		extra4 = none 
		model = 1 
		brigade_model = 0 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 14500 id = 95 } 
		name = "4. Unterseebootsflottille" 
		progress = 0.0000 
		location = 0 
		cost = 1.9200 
		date = { 
			year = 1936 
			month = march 
			day = 1 
			hour = 0 
			} 
		manpower = 0.3000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.4245 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = submarine 
		extra = none 
		extra1 = none 
		extra2 = none 
		extra3 = none 
		extra4 = none 
		model = 1 
		brigade_model = 0 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 14500 id = 272 } 
		name = "1. Truppentransporterflottille" 
		progress = 0.0000 
		location = 300 
		cost = 4.8000 
		date = { 
			year = 1937 
			month = november 
			day = 5 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 9 
		done = 0 
		days = 246 
		days_for_first = 86 
		gearing_bonus = 0.0000 
		type = transport 
		extra = none 
		extra1 = none 
		extra2 = none 
		extra3 = none 
		extra4 = none 
		model = 0 
		brigade_model = 0 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 14500 id = 273 } 
		name = "1. Armee" 
		progress = 0.0000 
		location = 300 
		cost = 18.0096 
		date = { 
			year = 1938 
			month = june 
			day = 18 
			hour = 0 
			} 
		manpower = 7.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 4 
		done = 0 
		days = 888 
		days_for_first = 240 
		gearing_bonus = 0.0000 
		type = hq 
		extra = anti_air 
		extra1 = none 
		extra2 = none 
		extra3 = none 
		extra4 = none 
		model = 1 
		brigade_model = 0 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		}
}