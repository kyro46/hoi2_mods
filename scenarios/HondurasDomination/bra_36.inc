
##############################
# Country definition for BRA #
##############################

province = { id = 847 anti_air = 1 } # Curitiba
province =
{ id         = 848
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}              # P�rto Alegre
province = { id = 883 anti_air = 2 } # Goi�s
province =
{ id         = 885
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # Rio de Janeiro
province =
{ id         = 886
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # S�o Paulo

#####################
# Country main data #
#####################

country =
{ tag                    = BRA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 122.9 # 125 - building queue
  consumer = 0.2258 
  supply = 0.0322 
  production = 0.7420 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 885
  transports             = 100
  escorts                = 15
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 9
    free_market       = 8
    freedom           = 7
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  nationalprovinces      = { 820 822 823 824 825 826 834 835 847 848 872 876 877 878 879 880 881 882 883 884 885 886 887 }
  ownedprovinces         = { 820 822 823 824 825 826 834 835 847 848 872 876 877 878 879 880 881 882 883 884 885 886 887 }
  controlledprovinces    = { 820 822 823 824 825 826 834 835 847 848 872 876 877 878 879 880 881 882 883 884 885 886 887 }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5080 5090 5190 6010 6020 3010 3070 3130
                             3250 3400 8010 8020 8040 8050
                           }
  diplomacy =
  { relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = IRE value = 20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 34001 }
  headofgovernment       = { type = 9 id = 34002 }
  foreignminister        = { type = 9 id = 34003 }
  armamentminister       = { type = 9 id = 34004 }
  ministerofsecurity     = { type = 9 id = 34005 }
  ministerofintelligence = { type = 9 id = 34006 }
  chiefofstaff           = { type = 9 id = 34007 }
  chiefofarmy            = { type = 9 id = 34008 }
  chiefofnavy            = { type = 9 id = 34009 }
  chiefofair             = { type = 9 id = 34010 }
  landunit =
  { id       = { type = 18000 id = 1 }
    name     = "1o Ex�rcito do Brasil"
    location = 883
    division =
    { id       = { type = 18000 id = 2 }
      name     = "I Divis�o de Infantaria"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 18000 id = 3 }
      name     = "II Divis�o de Infantaria"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 18000 id = 4 }
      name     = "CCLXVIII Divis�o do Guarda Civ�l"
      strength = 100
      type     = militia
      extra    = anti_air
    }
    division =
    { id       = { type = 18000 id = 5 }
      name     = "CCLXIX Divis�o do Guarda Civ�l"
      strength = 100
      type     = militia
    }
  }
  landunit =
  { id       = { type = 18000 id = 6 }
    name     = "2o Ex�rcito do Brasil"
    location = 885
    division =
    { id       = { type = 18000 id = 7 }
      name     = "III Divis�o de Infantaria"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 18000 id = 8 }
      name     = "XCII Divis�o de Cavalaria"
      strength = 100
      type     = cavalry
    }
  }
  # #####################################################
  navalunit =
  { id       = { type = 18000 id = 11 }
    location = 885
    base     = 885
    name     = "Navais do Transporte"
    division =
    { id   = { type = 18000 id = 12 }
      name = "1. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 13 }
      name = "2. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 14 }
      name = "3. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 15 }
      name = "4. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 16 }
      name = "5. Flotilla de Navios de Transporte"
      type = transport
    }
    division =
    { id   = { type = 18000 id = 17 }
      name = "6. Flotilla de Navios de Transporte"
      type = transport
    }
  }
  navalunit =
  { name     = "Brazilian Navy"
    id       = { type = 18000 id = 18 }
    location = 848
    base     = 848
    division =
    { id    = { type = 18000 id = 19 }
      name  = "S�o Paulo"
      type  = battleship
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 18000 id = 20 }
      name  = "Minas Gerais"
      type  = battleship
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 18000 id = 21 }
      name  = "Bahia"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 18000 id = 22 }
      name  = "Rio Grande do Sul"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
  }
  # #########################################################
  airunit =
  { id       = { type = 18000 id = 9 }
    name     = "Aereo do Br�sil"
    location = 885
    base     = 885
    division =
    { id       = { type = 18000 id = 10 }
      name     = "1. Grupo de Ca�as"
      strength = 50
      type     = interceptor
      model    = 0
    }
  } 
	province_development = { 
		id = { type = 18000 id = 23 } 
		name = "" 
		progress = 0.0000 
		location = 885 
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
		id = { type = 18000 id = 24 } 
		name = "" 
		progress = 0.0000 
		location = 885 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = july 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 151 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18000 id = 25 } 
		name = "" 
		progress = 0.0000 
		location = 881 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = july 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 151 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18000 id = 26 } 
		name = "" 
		progress = 0.0000 
		location = 884 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = july 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 151 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18000 id = 27 } 
		name = "" 
		progress = 0.0000 
		location = 886 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = july 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 151 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18000 id = 28 } 
		name = "" 
		progress = 0.0000 
		location = 882 
		cost = 2.0000 
		date = { 
			year = 1951 
			month = december 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 252 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18000 id = 29 } 
		name = "" 
		progress = 0.0000 
		location = 880 
		cost = 2.0000 
		date = { 
			year = 1951 
			month = december 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 252 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18000 id = 30 } 
		name = "" 
		progress = 0.0000 
		location = 824 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = march 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2620 
		days_for_first = 252 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18000 id = 31 } 
		name = "" 
		progress = 0.0000 
		location = 826 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = march 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2620 
		days_for_first = 252 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18000 id = 32 } 
		name = "" 
		progress = 0.0000 
		location = 825 
		cost = 2.0000 
		date = { 
			year = 1956 
			month = june 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 36 
		done = 0 
		days = 2941 
		days_for_first = 252 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18000 id = 33 } 
		name = "" 
		progress = 0.0000 
		location = 847 
		cost = 2.0000 
		date = { 
			year = 1951 
			month = december 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 252 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18000 id = 34 } 
		name = "" 
		progress = 0.0000 
		location = 848 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = july 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 151 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
