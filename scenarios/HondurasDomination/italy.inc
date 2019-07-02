
##############################
# Country definition for ITA #
##############################

province =
{ id         = 368
  landfort   = 5
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Genoa
province =
{ id         = 369
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
}              # La Spezia
province =
{ id       = 370
  air_base = { size = 4 current_size = 4 }
  anti_air = 3
}            # Milan
province =
{ id         = 378
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Venice
province =
{ id       = 399
  air_base = { size = 4 current_size = 4 }
}            # Rhodes
province = { id = 512 anti_air = 1 } # Bologna
province = { id = 513 anti_air = 1 } # Florence
province =
{ id       = 515
  anti_air = 1
  air_base = { size = 10 current_size = 10 }
}            # Rome
province =
{ id       = 521
  air_base = { size = 4 current_size = 4 }
}            # Naples
province =
{ id         = 523
  anti_air   = 1
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Taranto
province =
{ id         = 525
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Palermo
province = { id = 531 landfort = 5 anti_air = 3 } # Turin
province =
{ id         = 534
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  metalpool = 38 
  oilpool    = 100
  supplypool = 150 # was 800
}              # Sardinia
province =
{ id         = 919
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  landfort   = 3
}              # Tobruk
province =
{ id         = 924
  anti_air   = 1
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 4 current_size = 4 }
}              # Bengazi
province =
{ id         = 932
  anti_air   = 1
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
  oilpool    = 100
  supplypool = 150 # was 200
}              # Tripoli
province =
{ id         = 1033
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  oilpool    = 100
  supplypool = 300
}              # Massaua

#####################
# 83 new airports built to cope with the war - Modified by Cardus 
# ref ref http://www.aeronautica.difesa.it/storiaTradizione/LaStoria/Pagine/guerreEtiopiaSpagna.aspx
#####################

province =
{ id         = 1038
  air_base   = { size = 2 current_size = 2 }
}              # Assab
province =
{ id         = 1056
  air_base   = { size = 2 current_size = 2 }
}              # Mogadishu
province =
{ id         = 1034
  air_base   = { size = 1 current_size = 1 }
}              # Obbia
province =
{ id         = 1055
  air_base   = { size = 1 current_size = 1 }
}              # Bardera

province = { id = 1056 oilpool = 100 supplypool = 300 } # Mogadishu

#####################
# Country main data #
#####################

country =
{ tag                    = ITA
  manpower               = 938.8 # 900 + 55 from militia disbanding - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 962
  rare_materials         = 500
  oil                    = 500
  supplies               = 2830.8 # 2800 + 30.8 from militia dsbanding
  money                  = 50
  consumer = 0.2000 
  supply = 0.0500 
  production = 0.4500 
  reinforcement = 0.3000 
  upgrading = 0.0000 
  belligerence           = 0 # to avoid MP problems
  capital                = 515
  transports             = 370
  escorts                = 96
  # Illyrian Coast
  diplomacy = { 
	relation = { tag = AFG value = 50 }
    relation =
    { tag        = ALB
      value      = 12 access = yes 
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = 1 }
    relation =
    { tag        = AUS
      value      = 125
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = BEL value = -5 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHI value = 4 }
	relation = { tag = SIK value = 2 }
	relation = { tag = CHL value = 30 }
    relation = { tag = CZE value = 15 }
	relation = { tag = CGX value = 2 }
    relation = { tag = ENG value = -50 }
    relation = { tag = ETH value = -200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = -50 }
    relation = { tag = GER value = 50 }
    relation = { tag = JAP value = 9 }
	relation =
    { tag        = GRE
      value      = -35
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = HOL value = -20 }
    relation =
    { tag        = HUN
      value      = 125
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = IRE value = 20 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
	relation = { tag = POL value = 3 }
	relation = { tag = PER value = 4 }
	relation =
    { tag        = ROM
      value      = 50
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = SAF value = 2 }
    relation = { tag = SIA value = 3 }
	relation = { tag = SAU value = -25 }
    relation =
    { tag        = SCH
      value      = 1
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SPR value = -50 }
    relation =
    { tag        = TUR
      value      = 2
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = YEM value = 50 }
    relation = { tag = YUG value = 75 }
  }
  SpyInfo                = { country = "ITA" NumberOfSpies = 5 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 3 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 4 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 2 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 1 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 4 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }


  nationalidentity = "policy_identity_parochial"
	socialpolicy = "policy_social_conformism"
	nationalculture = "policy_culture_ethnic"

  # Somaliland
  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 381 384 387 388 389 }
  ownedprovinces         = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398 
                             399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
                             1039 1038 1034 1055 1056 1058
                           }
  # Somaliland
  controlledprovinces    = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398 
                             399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
                             1039 1038 1034 1055 1056 1058
                           }
  # ITA 1936 techs
  # ######################
  # Early fighter
  techapps               = { 6120  4010  4120  4130  4190  4250  2150  2010  2020  2030  2290  2300  2310  2450  1010  1020  1190  1200  1110  5010 
                             5080  5090  5190  5310  5320  5470  5480  9010  9020  9030  6010  6030  8010  8020  8030  8040  8050  8070  8120  3010 
                             3020  3030  3070  3080  3090  3130  3140  3150  3190  3250  3260  3270  3280  3400  3410  3420  14000 3100  3320  5020
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 4
    free_market       = 7
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 3001 }
  headofgovernment       = { type = 9 id = 3002 }
  foreignminister        = { type = 9 id = 3003 }
  armamentminister       = { type = 9 id = 3076 }
  ministerofsecurity     = { type = 9 id = 3005 }
  ministerofintelligence = { type = 9 id = 3006 }
  chiefofstaff           = { type = 9 id = 3007 }
  chiefofarmy            = { type = 9 id = 3008 }
  chiefofnavy            = { type = 9 id = 3009 }
  chiefofair             = { type = 9 id = 3010 }

 ###############################################
 ############ Land OOB #########################
 ###############################################
  landunit =
  { id       = { type = 23500 id = 1 }
    location = 531 # Turin
    name     = "1a Armata"
    division =
    { id            = { type = 23500 id = 3 }
      name          = "22a Divisione 'Cacciatori delle Alpi'"
      type          = infantry
#      extra         = artillery # moved to "4a Divisione 'Livorno'"
#      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 4 }
    location = 531 # Turin
    name     = "II Corpo d'Armata"
    division =
    { id       = { type = 23500 id = 6 }
      name     = "25a Divisione 'Bologna'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 8 }
    location = 531 # Turin
    name     = "III Corpo d'Armata"
    division =
    { id       = { type = 23500 id = 9 }
      name     = "3a Divisione 'Ravenna'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 10 }
      name     = "6a Divisione 'Cuneo'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 11 }
    location = 378 # Venezia
    name     = "2a Armata"
    division =
    { id            = { type = 23500 id = 12 }
      name          = "13a Divisione 'Re'"
      type          = infantry
#      extra         = artillery # moved to "24a Divisione 'Pinerolo'"
#      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 13 }
    location = 378 # Venezia
    name     = "V Corpo d'Armata"
    # Gen. R. Balocco#
    division =
    { id       = { type = 23500 id = 14 }
      name     = "12a Divisione 'Sassari'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 15 }
      name     = "15a Divisione 'Bergamo'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 16 }
    location = 378 # Venezia
    name     = "VIII Corpo d'Armata"
    # Gen. F Gambelli#
    division =
    { id       = { type = 23500 id = 17 }
      name     = "9a Divisione 'Pasubio'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 18 }
      name     = "10a Divisione 'Piave'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 19 }
    location = 378 # Venezia
    name     = "XI Corpo d'Armata"
    # Gen. C. Mercalli#
    division =
    { id       = { type = 23500 id = 20 }
      name     = "14a Divisione 'Isonzo'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 2 }
    location = 1038 # Assab, was Tobruk
    name     = "Comando Superiore FF.AA. Africa SETT"
    division =
    { id       = { type = 23500 id = 22 }
      name     = "18a Divisione 'Messina'"
      type     = infantry
      model    = 1
      extra    = artillery # from "16a Divisione 'Pistoia'"
      brigade_model = 2
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 5 }
      name     = "4a Divisione 'Livorno'"
      type     = infantry
      model    = 1
      extra    = artillery # from "22a Divisione 'Cacciatori delle Alpi'"
      brigade_model = 2
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 62 }
      name     = "24a Divisione 'Pinerolo'"
      type     = infantry
      model    = 1
      extra    = artillery # from "13a Divisione 'Re'"
      brigade_model = 2
      strength = 70
   }
    division =
    { id       = { type = 23500 id = 65 }
      name     = "27a Divisione 'Brescia'"
      type     = infantry
      model    = 1
      extra    = artillery # from "11a Divisione 'Brennero'"
      brigade_model = 2
      strength = 70
    }
#    division =
#    { id       = { type = 23500 id = 78 }
#      name     = "7a Divisione CC.NN. 'Cirene'"
#      type     = militia # disbanded for AI in 1.11
#      strength = 100
#    }
  }
  landunit =
  { id       = { type = 23500 id = 23 }
    location = 1039 # Asmara, was Venezia
    name     = "Corpo d'Armata Celere"
    # Gen. G. Messe#
    division =
    { id       = { type = 23500 id = 186 }
      name     = "Gr. squadroni cavalleria indigena"
      type     = cavalry
 	  extra = armored_car 
	  strength = 100
    }
    division =
    { id       = { type = 23500 id = 24 }
      name     = "1a Divisione 'Eugenio di Savoia'"
      type     = cavalry
      strength = 70
      model    = 1
      extra    = armored_car
    }
    division =
    { id       = { type = 23500 id = 25 }
      name     = "2a Divisione 'Emanuele Filiberto'"
      type     = cavalry
      strength = 70
      model    = 1
      extra    = armored_car # from "V-XV Indigeni e banda 'Scimezana'"
    }
    division =
    { id       = { type = 23500 id = 26 }
      name     = "3a Divisione 'Principe Amedeo'"
      type     = cavalry
      strength = 70
      model    = 1
      extra    = armored_car # from "Gr. Bande Altopiano - Seraé, Cheren and Hamasien"
    }
  }
  landunit =
  { id       = { type = 23500 id = 27 }
    location = 524 # Reggio di Calabria
    name     = "3a Armata"
    division =
    { id            = { type = 23500 id = 28 }
      name          = "16a Divisione 'Pistoia'"
      type          = infantry
#      extra         = artillery # moved to "18a Divisione 'Messina'"
#      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 30 }
    location = 524 # Reggio di Calabria
    name     = "VII Corpo d'Armata"
    # Gen. A. Agromini#
    division =
    { id       = { type = 23500 id = 31 }
      name     = "7a Divisione 'Lupi di Toscana'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 32 }
      name     = "20a Divisione 'Friuli'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 33 }
    location = 524 # Reggio di Calabria
    name     = "IX Corpo d'Armata"
    # Gen. C.Rossi#
    division =
    { id       = { type = 23500 id = 34 }
      name     = "17a Divisione 'Pavia'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 35 }
      name     = "23a Divisione 'Ferrara'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 36 }
    location = 525 # Palermo
    name     = "XII Corpo d'Armata"
    # Gen. A.Rossi#
    division =
    { id       = { type = 23500 id = 37 }
      name     = "28a Divisione 'Aosta'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 38 }
    location = 525 # Palermo
    name     = "XIII Corpo d'Armata"
    division =
    { id       = { type = 23500 id = 39 }
      name     = "31a Divisione 'Calabria'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 40 }
    location = 368 # Genoa
    name     = "4a Armata"
    # Gen. A Guzzoni#
    division =
    { id            = { type = 23500 id = 41 }
      name          = "11a Divisione 'Brennero'"
      type          = infantry
#      extra         = artillery # moved to "27a Divisione 'Brescia'"
#      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 43 }
    location = 368 # Genoa
    name     = "I Corpo d'Armata"
    # Gen. C. Vecchiarelli#
    division =
    { id       = { type = 23500 id = 44 }
      name     = "1a Divisione 'Superga'"
      type     = infantry
#      extra    = armored_car # moved to "29a Divisione 'Piemonte'"
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 45 }
    location = 368 # Genoa
    name     = "IV Corpo d'Armata"
    # Gen. C. Mercalli#
    division =
    { id       = { type = 23500 id = 46 }
      name     = "2a Divisione 'Sforzesca'"
      type     = infantry
#      extra    = armored_car # moved to "29a Divisione 'Peloritana'"
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 47 }
    location = 1039 # Asmara, was Genoa
    name     = "Corpo d'Armata Alpino"
    # Gen. L. Negri#
   division =
    { id       = { type = 23500 id = 7 }
      name     = "4a Divisione Alpina 'Cuneense'"
      type     = bergsjaeger
	  extra = artillery	# From "29a Divisione 'Peloritana'"
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 58 }
      name     = "5a Divisione Alpina 'Pusteria'"
      type     = bergsjaeger
	  extra = artillery	  
      strength = 100
    }
     division =
    { id       = { type = 23500 id = 48 }
      name     = "1a Divisione Alpina 'Taurinense'"
      type     = bergsjaeger
      extra    = artillery # from "1° Gr. Btg CC.NN. dell'Eritrea"
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 49 }
      name     = "2a Divisione Alpina 'Tridentina'"
      type     = bergsjaeger
      extra    = artillery # from "Banda dell'Hassamò"
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 21 }
      name     = "3a Divisione Alpina 'Julia'"
      type     = bergsjaeger
      extra    = artillery # from "3a Divisione CC.NN. '21 Aprile'"
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 50 }
    location = 515 # Roma
    name     = "Riserva Centrale"
    division =
    { id       = { type = 23500 id = 190 }
      name     = "Q.G. Forze Armate"   #new hq
      type     = hq
      model    = 0
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 51 }
      name     = "21a Divisione 'Granatieri di Sardegna'"
      type     = infantry
      strength = 70		#reduced the strenght
    }
    #removed from AOI and placed in Rome as central reserve, strenght reduced from 100 to 70
 }
####################################################################################
#OOB Italian Troops Campagna d'Africa 1935-1936 by Cardus
# ref. http://www.regioesercito.it/reparti/mvsn/mvsn_et35.htm
# ref http://digilander.libero.it/fiammecremisi/dopoguerra1/etiopia.htm
# ref http://it.wikipedia.org/wiki/Guerra_d%27Etiopia
# ref http://www.aeronautica.difesa.it/storiaTradizione/LaStoria/Pagine/guerreEtiopiaSpagna.aspx
#####################################################################################

  landunit =
  { id       = { type = 23500 id = 52 }
    location = 1033
    name     = "Comando Superiore dell'A.O.I."
	#Maresciallo Badoglio#
    division =
    { id       = { type = 23500 id = 53 }
      name     = "Q.G. Armata dell'A.O.I."
      type     = hq
      model    = 0
      extra = engineer
      strength = 100
    }
    #Div Gran Sasso is with the II CORPO D'ARMATA
    #Div Sila is with the III CORPO D'ARMATA
	#CC.NN. '1 Febbraio'is with IV CORPO D'ARMATA
	#6a Divisione CC.NN. 'Tevere' is with Forze Armate della Somalia
#    division =
#    { id       = { type = 23500 id = 59 }
#      name     = "4a Divisione CC.NN. '3 Gennaio'"
#	  #Gen. Alessandro Traditi
#      type     = militia # disbanded for AI in 1.11
#      strength = 100
#    }
  }
  landunit =
  { id       = { type = 23500 id = 55 }
    location = 1038
    name     = "I Corpo d'Armata dell'A.O.I."
    # Gen. Santini
    division =
    { id       = { type = 23500 id = 56 }
      name     = "26a Divisione 'Assietta'"
      #Gen. Enrico Riccardi
	  type     = infantry
      model    = 1
	  extra = artillery
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 57 }
      name     = "30a Divisione 'Sabauda'"
      #
	  type     = infantry
      model    = 1
	  extra = artillery	  
      strength = 100
    }
#    division =
#	{ id       = { type = 23500 id = 180 }
#      name     = "V-XV Indigeni e banda 'Scimezana'"
#      type     = militia # disbanded for AI in 1.11
#      strength = 100
#	  extra = armored_car # moved to "2a Divisione 'Emanuele Filiberto'"
#    }
  }
  landunit =
  { id       = { type = 23500 id = 60 }
    location = 1055 # Bardera, was Asmara
    name     = "II Corpo d'Armata dell'A.O.I."
    # Gen. Maravigna
#    division =
#    { id       = { type = 23500 id = 61 }
#      name     = "19a Divisione 'Venezia'"
#      type     = infantry
#      model    = 1
#      extra    = armored_car
#      strength = 100
#   }
#    division =
#    { id       = { type = 23500 id = 62 }
#      name     = "24a Divisione 'Pinerolo'"
#      type     = infantry
#      model    = 1
#      strength = 70
#   }
    division =
	{ id       = { type = 23500 id = 181 }
      name     = "19a Divisione 'Gavinana'"
	  #Gen. Nino Villasanta
      type     = infantry
      model    = 1
	  extra = artillery	  
      strength = 100
    }
    division =
    { id            = { type = 23500 id = 182 }
      name          = "24a Divisione 'Gran Sasso'"
	  #Gen. A.R. Adalberto di Savoia
      type          = infantry
      model         = 1
      extra = artillery
      strength      = 100
    }
#    division =
#    { id       = { type = 23500 id = 63 }
#      name     = "3a Divisione CC.NN. '21 Aprile'"
#	  #Gen. Giacomo Appiotti
#      type     = militia # disbanded for AI in 1.11
#	  extra = artillery # moved to "3a Divisione Alpina 'Julia'"
#      strength = 100
#    }
#    division =
#    { id       = { type = 23500 id = 184 }
#      name     = "Gr. Bande Altopiano - Seraé, Cheren and Hamasien"
#	  type     = militia # disbanded for AI in 1.11
#	  extra = armored_car # moved to "3a Divisione 'Principe Amedeo'"
#      strength = 100
#    }
  } 

  landunit =
  { id       = { type = 23500 id = 64 }
    location = 1038
    name     = "III Corpo d'Armata dell'A.O.I."
    # Gen. Bastico
#    division =
#    { id       = { type = 23500 id = 65 }
#      name     = "27a Divisione 'Brescia'"
#      type     = infantry
#      model    = 1
#      strength = 100
#    }
	division =
    { id       = { type = 23500 id = 61 }
      name     = "19a Divisione 'Venezia'"
      type     = infantry
      model    = 1
      extra    = armored_car
      strength = 70
   }
   division =
    { id       = { type = 23500 id = 75 }
      name     = "29a Divisione 'Piemonte'"
      type     = infantry
      model    = 1
      extra    = armored_car # from "1a Divisione 'Superga'"
      strength = 70
    }
    division =
    { id            = { type = 23500 id = 183 }
      name          = "27a Divisione 'Sila'"
	  #Gen. Francesco Bertini
      type          = infantry
      model         = 1
      extra = artillery
      strength      = 100
    }
#    division =
#    { id       = { type = 23500 id = 66 }
#      name     = "1a Divisione CC.NN. '23 Marzo'"
#	  #Gen. Domenico Siciliani
#      type     = militia # disbanded for AI in 1.11
#      strength = 100
#    }
  }
  landunit =
  { id       = { type = 23500 id = 67 }
    location = 1055 # Bardera, was Asmara
    name     = "IV Corpo d'Armata dell'A.O.I."
    # Gen. Babbini#
	division =
    { id       = { type = 23500 id = 68 }
      name     = "5a Divisione 'Cosseria'"
	  #Gen. Adolfo Olivetti
      type     = infantry
      model    = 1
	  extra = artillery
      strength = 100
    }
#    division =
#    { id       = { type = 23500 id = 69 }
#      name     = "2a Divisione CC.NN. '28 Ottobre'"
#	  #Gen. Umberto Somma
#      type     = militia # disbanded for AI in 1.11
#      strength = 100
#    }
#    division =
#    { id       = { type = 23500 id = 70 }
#      name     = "5a Divisione CC.NN. '1 Febbraio'"
#	  #Gen. Attilio Teruzzi
#      type     = militia # disbanded for AI in 1.11
#      strength = 100
#    }
  }
  landunit =
  { id       = { type = 23500 id = 71 }
    location = 1055 # Bardera, was Asmara
    name     = "Corpo d'Armata Eritreo"
    # Gen. Pirzio Biroli#
    division =
    { id       = { type = 23500 id = 72 }
      name     = "1a Divisione 'Eritrea'"
      type     = infantry
      model    = 1
  	  extra = artillery
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 73 }
      name     = "2a Divisione 'Eritrea'"
      type     = infantry
      model    = 1
  	  extra = artillery
      strength = 100
    }
#    division =
#    { id       = { type = 23500 id = 185 }
#      name     = "1° Gr. Btg CC.NN. dell'Eritrea"
#      type     = militia # disbanded for AI in 1.11
#  	  extra = artillery # moved to "1a Divisione Alpina 'Taurinense'"
#      strength = 100
#    }
#    division =
#    { id       = { type = 23500 id = 187 }
#      name     = "Banda dell'Hassamò"
#      type     = militia # disbanded for AI in 1.11
#  	  extra = artillery # moved to "2a Divisione Alpina 'Tridentina'"
#      strength = 100
#    }
  }
  landunit =
  { id       = { type = 23500 id = 74 }
    location = 1034 # Obbia
    name     = "Forze Armate della Somalia"
    # Gen. Graziani#
#    division =
#    { id       = { type = 23500 id = 75 }
#      name     = "29a Divisione 'Piemonte'"
#      type     = infantry
#      model    = 1
#     strength = 100
#    }
    division =
    { id       = { type = 23500 id = 188 }
      name     = "Q.G. Forze Armate della Somalia"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 189 }
      name     = "29a Divisione 'Peloritana'"
	  #Gen. sisto Bertoldi
      type     = infantry
	  model    = 1
      extra    = armored_car # from "2a Divisione 'Sforzesca'"
#	  extra = artillery # moved to "4a Divisione Alpina 'Cuneense'"
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 76 }
      name     = "Divisione 'Libia'"
	  #Gen. Guglielmo Nasi
      type     = infantry
	  model    = 1
  	  extra = artillery
      strength = 100
    }
#    division =
#    { id       = { type = 23500 id = 77 }
#      name     = "6a Divisione CC.NN. 'Tevere'"
#	  #Gen. Enrico Boscardi
#      type     = militia # disbanded for AI in 1.11
#      strength = 100
#    }
  } 
  # ###########################################
	### Italian Navy OOB ###
  # ###########################################
  navalunit =
  { id       = { type = 23500 id = 79 }
    name     = "Regia Marina"
    location = 523 # Taranto
    base     = 523
    division =
    { id    = { type = 23500 id = 80 }
      name  = "2a Divisione Torpediniere"
      type  = destroyer
      model = 1
      extra1 = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 81 }
      name  = "RN Andrea Doria"
      type  = battleship
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = none
      extra4 = naval_anti_air_l
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 23500 id = 82 }
      name  = "RN Caio Duilio"
      type  = battleship
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = none
      extra4 = naval_anti_air_l
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 23500 id = 83 }
      name  = "RN Campania"
      type  = heavy_cruiser
      model = 0
      extra1 = none
      extra2 = none
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 84 }
      name  = "RN San Marco"
      type  = heavy_cruiser
      model = 0
      extra1 = none
      extra2 = none
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 85 }
      name  = "RN San Giorgio"
      type  = heavy_cruiser
      model = 0
      extra1 = none
      extra2 = none
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 86 }
      name  = "RN Taranto"
      type  = light_cruiser
      model = 0
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 23500 id = 87 }
      name  = "RN Bari"
      type  = light_cruiser
      model = 0
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 23500 id = 88 }
      name  = "RN Libia"
      type  = light_cruiser
      model = 0
      extra1 = none
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 23500 id = 196 }
      name  = "RN Ancona"
      type  = light_cruiser
      model = 0
      extra1 = none
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 23500 id = 89 }
      name  = "17a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 90 }
      name  = "18a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 91 }
      name  = "2a Squadriglia Torpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 92 }
      name  = "3a Squadriglia Torpediniere"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 23500 id = 93 }
      name  = "21a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 94 }
      name  = "22a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 95 }
      name  = "6a Squadriglia Torpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 96 }
      name  = "7a Squadriglia Torpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 97 }
      name  = "15a Squadriglia Torpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 98 }
    name     = "1a Squadra di Marina"
    location = 523 # Taranto
    base     = 523
    division =
    { id    = { type = 23500 id = 99 }
      name  = "RN Zara"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 100 }
      name  = "RN Gorizia"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 101 }
      name  = "RN Fiume"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 102 }
      name  = "9a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 1
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 103 }
      name  = "Squadrone Giorgio Orsini"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 23500 id = 104 }
      name  = "Squadrone Tarquinia"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 105 }
    name     = "4a Squadra di Marina"
    location = 378 # Venice
    base     = 378
    division =
    { id       = { type = 23500 id = 106 }
      name     = "RN Alberico da Barbiano"
      type     = light_cruiser
      model    = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 107 }
      name  = "RN Luigi Cadorna"
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id       = { type = 23500 id = 108 }
      name     = "RN Alberto da Giussano"
      type     = light_cruiser
      model    = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 109 }
      name  = "RN Armando Diaz"
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 23500 id = 110 }
      name  = "Squadrone Aventino"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 111 }
    name     = "5a Squadra di Marina"
    location = 523 # Taranto
    base     = 523
    division =
    { id    = { type = 23500 id = 112 }
      name  = "7a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 2
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 113 }
      name  = "8a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 2
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 114 }
      name  = "Squadrone Sagittario"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 115 }
    name     = "8a Squadra di Marina"
    location = 378 # Venice
    base     = 378
    division =
    { id    = { type = 23500 id = 116 }
      name  = "16a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 195 }
    name     = "9a Squadra di Marina"
    location = 378 # Venice
    base     = 378
    division =
    { id    = { type = 23500 id = 179 }
      name  = "15a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 117 }
    name     = "9a Squadra di Marina"
    location = 523 # Taranto
    base     = 523
    division =
    { id    = { type = 23500 id = 118 }
      name  = "RN Pola"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 119 }
    name     = "19a Squadra di Marina"
    location = 932 # Tripoli
    base     = 932
    division =
    { id       = { type = 23500 id = 120 }
      name     = "RN Giovanni dalle Bande Nere"
      type     = light_cruiser
      model    = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 121 }
      name     = "RN Bartolomeo Colleoni"
      type     = light_cruiser
      model    = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 122 }
      name  = "Squadrone Vallelunga"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 123 }
    name     = "11a Squadra di Marina"
    location = 368 # Genoa
    base     = 368
    division =
    { id    = { type = 23500 id = 124 }
      name  = "RN Trento"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 125 }
      name  = "RN Bolzano"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 126 }
      name  = "RN Trieste"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 127 }
      name  = "Squadrone Asmara"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 128 }
    name     = "17a Squadra di Marina"
    location = 368 # Genoa
    base     = 368
    division =
    { id       = { type = 23500 id = 129 }
      name     = "RN Duca d'Aosta"
      type     = light_cruiser
      model    = 2
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 130 }
      name     = "RN Muzio Attendolo"
      type     = light_cruiser
      model    = 2
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 131 }
      name     = "RN Raimondo Montecuccoli"
      type     = light_cruiser
      model    = 2
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 132 }
      name  = "13a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 133 }
    name     = "1a Flotta Sommergibili"
    location = 534 # Sardinia
    base     = 534
    division =
    { id    = { type = 23500 id = 134 }
      name  = "4a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 135 }
      name  = "51a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 136 }
      name  = "52a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 137 }
    name     = "2a Flotta Sommergibili"
    location = 525 # Palermo
    base     = 525
    division =
    { id    = { type = 23500 id = 138 }
      name  = "11a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 139 }
      name  = "12a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 140 }
      name  = "13a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 141 }
    name     = "3a Flotta Sommergibili"
    location = 378 # Venice
    base     = 378
    division =
    { id    = { type = 23500 id = 142 }
      name  = "21a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 143 }
    name     = "4a Flotta Sommergibili"
    location = 523 # Taranto
    base     = 523
    division =
    { id    = { type = 23500 id = 144 }
      name  = "31a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 23500 id = 145 }
      name  = "33a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 146 }
    name     = "5a Flotta Sommergibili"
    location = 368 # Genoa
    base     = 368
    division =
    { id    = { type = 23500 id = 147 }
      name  = "40a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 148 }
    name     = "Comando Navale Libico"
    location = 932 # Tripoli
    base     = 932
    division =
    { id    = { type = 23500 id = 149 }
      name  = "1a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 150 }
    name     = "6a Flottiglia Sommergibili"
    location = 932 # Tripoli
    base     = 932
    division =
    { id    = { type = 23500 id = 151 }
      name  = "61a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 152 }
    name     = "Comando Navale Mar Rosso"
    location = 1033 # Massaua
    base     = 1033
    division =
    { id    = { type = 23500 id = 153 }
      name  = "3a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 154 }
      name  = "5a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  #########################################
	### Italian Air OOB ###
  #########################################
  airunit =
  { location = 368
    base     = 368
    id       = { type = 23500 id = 155 }
    name     = "1a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 156 }
      name     = "9a Divisione Caccia"
      strength = 100
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 534
    base     = 534
    id       = { type = 23500 id = 157 }
    name     = "4o Comando Bombardieri Tattici 'Drago'"
    division =
    { id       = { type = 23500 id = 158 }
      name     = "4a Divisione Bombardieri 'Drago'"
      strength = 100
      type     = tactical_bomber
      model    = 0
    }
  }
  airunit =
  { location = 515
    base     = 515
    id       = { type = 23500 id = 160 }
    name     = "2a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 161 }
      name     = "1a Divisione Caccia 'Aquila'"
      strength = 50
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { location = 515
    base     = 515
    id       = { type = 23500 id = 162 }
    name     = "3o Comando Aerosiluranti 'Centauro'"
    division =
    { id       = { type = 23500 id = 163 }
      name     = "3a Divisione Bombardieri 'Centauro'"
      strength = 100
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 23500 id = 164 }
    name     = "3a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 165 }
      name     = "7a Divisione Caccia"
      strength = 70 #reduced the strenght 
      type     = interceptor
      model    = 0
    }
    division =
	{ id       = { type = 23500 id = 177 }  # moved here from AOI
      name     = "14a Divisione Caccia 'Rex'"
      strength = 70
      type     = interceptor
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 178 }	# moved here from AOI
      name     = "13a Divisione Bombardieri 'Pegaso'"
      strength = 70
      type     = tactical_bomber
      model    = 0
    }
 }
  airunit =
  { location = 525
    base     = 525
    id       = { type = 23500 id = 166 }
    name     = "5o Comando Aerosiluranti 'Eolo'"
    division =
    { id       = { type = 23500 id = 167 }
      name     = "5a Divisione Bombardieri 'Eolo'"
      strength = 50
      type     = naval_bomber
      model    = 0
    }
  }
  airunit =
  { location = 932
    base     = 932
    id       = { type = 23500 id = 168 }
    name     = "4a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 169 }
      name     = "35a Divisione Bombardieri"
      strength = 50
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 170 }
      name     = "39a Divisione Trasporti"
      strength = 50
      type     = transport_plane
      model    = 0
    }
  }
  airunit =
  { location = 534
    base     = 534
    id       = { type = 23500 id = 171 }
    name     = "Aeronautica della Sardegna"
    division =
    { id       = { type = 23500 id = 172 }
      name     = "10a Divisione Bombardieri 'Marte'"
      strength = 80
      type     = naval_bomber
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 173 }
      name     = "2a Divisione Caccia 'Borea'"
      strength = 80
      type     = interceptor
      model    = 0
    }
  }
#####################################################################################
#OOB Italian Troops Campagna d'Africa 1935-1936 by Cardus 
# Approx. 500,000 combatants Approx. 595 aircraft Approx. 795 tanks 
# ref http://en.wikipedia.org/wiki/Second_Italo-Abyssinian_War#cite_note-Barker.2C_A._J._p._20-0 
# ref http://orbat.com/site/history/volume5/519/ItalianAirForceinItalianEastAfrica1919-1939PartI.pdf
# ref http://en.wikipedia.org/wiki/Italian_Order_of_Battle_Second_Italo-Abyssinian_War
#####################################################################################
  airunit =
  { location = 1033
    base     = 1033
    id       = { type = 23500 id = 174 }
    name     = "Aeronautica dell'Africa Orientale"
    division =
    { id       = { type = 23500 id = 175 }
      name     = "106º Stormo Caccia"
      strength = 40
      type     = interceptor
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 176 }
      name     = "4º Stormo Bombardieri"
      strength = 20
      type     = tactical_bomber
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 191 }
      name     = "27º Stormo Bombardieri"
      strength = 10
      type     = tactical_bomber
      model    = 0
    }
  }
  airunit =
  { location = 1033
    base     = 1033
    id       = { type = 23500 id = 192 }
    name     = "Aeronautica della Somalia"
	#Bgd. Gen. Ferruccio Ranza
    division =
    { id       = { type = 23500 id = 193 }
      name     = "106º Stormo Caccia"
      strength = 10
      type     = interceptor
      model    = 0
    }
    division =
    { id       = { type = 23500 id = 194 }
      name     = "7º Stormo Bombardieri"
      strength = 20
      type     = tactical_bomber
      model    = 0
    }
  }
#Units not in the OOB moved to Italy
#  airunit =
#  { location = 1033
#    base     = 1033
#    id       = { type = 23500 id = 174 }
#    name     = "Aeronautica dell'Africa Orientale"
#    division =
#    { id       = { type = 23500 id = 175 }
#      name     = "14a Divisione Caccia 'Rex'"
#      strength = 80
#      type     = interceptor
#      model    = 0
#    }
#    division =
#    { id       = { type = 23500 id = 176 }
#      name     = "13a Divisione Bombardieri 'Pegaso'"
#      strength = 80
#      type     = tactical_bomber
#      model    = 0
#    }
#  }
#####################

  # ################################################
  	### Warships Under Construction ###
  # ################################################
  convoy = { 
		id = { type = 23500 id = 219 } 
		istradeconvoy = no 
		transports = 10 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = no 
		supplies = no 
		path = { 534 2438 368 } 
		} 
	convoy = { 
		id = { type = 23500 id = 220 } 
		trade_id = { type = 16384 id = 327 } 
		istradeconvoy = yes 
		transports = 20 
		escorts = 4 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = yes 
		supplies = no 
		path = { 368 2438 2435 2433 2432 2431 2430 2429 2428 2424 2595 2420 2597 2411 23 } 
		} 
	province_development = { 
		id = { type = 23500 id = 208 } 
		name = "" 
		progress = 0.0000 
		location = 515 
		cost = 5.0000 
		date = { 
			year = 1944 
			month = may 
			day = 20 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 3024 
		days_for_first = 302 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 23500 id = 209 } 
		name = "" 
		progress = 0.0000 
		location = 370 
		cost = 5.0000 
		date = { 
			year = 1941 
			month = january 
			day = 12 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 6 
		done = 0 
		days = 1814 
		days_for_first = 302 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 23500 id = 210 } 
		name = "" 
		progress = 0.0000 
		location = 378 
		cost = 5.0000 
		date = { 
			year = 1941 
			month = january 
			day = 12 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 6 
		done = 0 
		days = 1814 
		days_for_first = 302 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 23500 id = 211 } 
		name = "" 
		progress = 0.0000 
		location = 515 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = july 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1110 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 212 } 
		name = "" 
		progress = 0.0000 
		location = 370 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = january 
			day = 27 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 808 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 213 } 
		name = "" 
		progress = 0.0000 
		location = 378 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = january 
			day = 27 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 808 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 214 } 
		name = "" 
		progress = 0.0000 
		location = 531 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = august 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 808 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 215 } 
		name = "" 
		progress = 0.0000 
		location = 512 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = july 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1110 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 216 } 
		name = "" 
		progress = 0.0000 
		location = 521 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = march 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1110 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 217 } 
		name = "" 
		progress = 0.0000 
		location = 368 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = july 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 808 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 218 } 
		name = "" 
		progress = 0.0000 
		location = 525 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = january 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 1412 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 221 } 
		name = "" 
		progress = 0.0000 
		location = 534 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = january 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2166 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 222 } 
		name = "" 
		progress = 0.0000 
		location = 513 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = march 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1865 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 223 } 
		name = "" 
		progress = 0.0000 
		location = 517 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = march 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1865 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	convoy_development = { 
		id = { type = 23500 id = 224 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1940 
			month = april 
			day = 9 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 25 
		done = 0 
		days = 1 
		days_for_first = 76 
		gearing_bonus = 0.0000 
		type = transports 
		} 
	convoy_development = { 
		id = { type = 23500 id = 225 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1940 
			month = april 
			day = 9 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 25 
		done = 0 
		days = 1 
		days_for_first = 76 
		gearing_bonus = 0.0000 
		type = transports 
		} 
	convoy_development = { 
		id = { type = 23500 id = 226 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 9 
			hour = 0 
			} 
		manpower = 0.6000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 25 
		done = 0 
		days = 1 
		days_for_first = 76 
		gearing_bonus = 0.0000 
		type = escorts 
		} 
	division_development = { 
		id = { type = 23500 id = 201 } 
		name = "RN Littorio" 
		progress = 0.0000 
		location = 0 
		cost = 7.0217 
		date = { 
			year = 1937 
			month = october 
			day = 22 
			hour = 0 
			} 
		manpower = 2.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.4264 # 0.2128
		size = 2 
		done = 0 
		days = 1 
		days_for_first = 428 
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
		brigade_model3 = 0 
		brigade_model4 = 1 
		} 
#	division_development = { 
#		id = { type = 23500 id = 202 } 
#		name = "RN Vittorio Veneto" 
#		progress = 0.0000 
#		location = 0 
#		cost = 7.0217 
#		date = { 
#			year = 1936 
#			month = december 
#			day = 6 
#			hour = 0 
#			} 
#		manpower = 2.5000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.2136 
#		size = 1 
#		done = 0 
#		days = 1 
#		days_for_first = 428 
#		gearing_bonus = 0.0000 
#		type = battleship 
#		extra = none 
#		extra1 = naval_sa_l 
#		extra2 = naval_fire_controll_l 
#		extra3 = naval_spotter_l 
#		extra4 = naval_anti_air_l 
#		model = 3 
#		brigade_model = 0 
#		brigade_model1 = 1 
#		brigade_model2 = 1 
#		brigade_model3 = 0 
#		brigade_model4 = 1 
#		} 
	division_development = { 
		id = { type = 23500 id = 204 } 
		name = "RN Giulio Cesare" 
		progress = 0.0000 
		location = 0 
		cost = 5.3983 
		date = { 
			year = 1936 
			month = may 
			day = 16 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.6472 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 386 
		gearing_bonus = 0.0000 
		type = battleship 
		extra = none 
		extra1 = naval_sa_l 
		extra2 = naval_fire_controll_l 
		extra3 = naval_anti_air_l 
		extra4 = none 
		model = 1 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 23500 id = 203 } 
		name = "RN Conte di Cavour" 
		progress = 0.0000 
		location = 0 
		cost = 5.3983 
		date = { 
			year = 1936 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.6891 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 386 
		gearing_bonus = 0.0000 
		type = battleship 
		extra = none 
		extra1 = naval_sa_l 
		extra2 = naval_fire_controll_l 
		extra3 = naval_anti_air_l 
		extra4 = none 
		model = 1 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 23500 id = 205 } 
		name = "RN Duca degli Abruzzi" 
		progress = 0.0000 
		location = 0 
		cost = 4.4025 
		date = { 
			year = 1936 
			month = march 
			day = 25 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.5117 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 176 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = naval_fire_controll_s 
		extra2 = naval_spotter_s 
		extra3 = none 
		extra4 = none 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 23500 id = 206 } 
		name = "RN Giuseppe Garibaldi" 
		progress = 0.0000 
		location = 0 
		cost = 4.4025 
		date = { 
			year = 1936 
			month = march 
			day = 25 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.5140 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 176 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = naval_fire_controll_s 
		extra2 = naval_spotter_s 
		extra3 = none 
		extra4 = none 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 23500 id = 29 } 
		name = "RN Eugenio di Savoia" 
		progress = 0.0000 
		location = 0 
		cost = 3.5625 
		date = { 
			year = 1936 
			month = january 
			day = 2 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.9835 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 176 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = naval_fire_controll_s 
		extra2 = naval_spotter_s 
		extra3 = none 
		extra4 = none 
		model = 2 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
#	division_development = { 
#		id = { type = 23500 id = 42 } 
#		name = "27a Flottiglia Sommergibili" 
#		progress = 0.0000 
#		location = 0 
#		cost = 1.6800 
#		date = { 
#			year = 1936 
#			month = april 
#			day = 0 
#			hour = 0 
#			} 
#		manpower = 0.3000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0109 
#		size = 1 
#		done = 0 
#		days = 1 
#		days_for_first = 92 
#		gearing_bonus = 0.0000 
#		type = submarine 
#		extra = none 
#		extra1 = none 
#		extra2 = none 
#		extra3 = none 
#		extra4 = none 
#		model = 1 
#		brigade_model = 0 
#		brigade_model1 = 0 
#		brigade_model2 = 0 
#		brigade_model3 = 0 
#		brigade_model4 = 0 
#		} 
#	division_development = { 
#		id = { type = 23500 id = 207 } 
#		name = "10a Squadriglia Cacciatorpediniere" 
#		progress = 0.0000 
#		location = 0 
#		cost = 3.3600 
#		date = { 
#			year = 1936 
#			month = april 
#			day = 15 
#			hour = 0 
#			} 
#		manpower = 0.6000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 1 
#		done = 0 
#		days = 1 
#		days_for_first = 105 
#		gearing_bonus = 0.0000 
#		type = destroyer 
#		extra = none 
#		extra1 = none 
#		extra2 = none 
#		extra3 = none 
#		extra4 = none 
#		model = 1 
#		brigade_model = 0 
#		brigade_model1 = 0 
#		brigade_model2 = 0 
#		brigade_model3 = 0 
#		brigade_model4 = 0 
#		}
}
