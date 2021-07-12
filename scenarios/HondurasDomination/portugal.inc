
##############################
# Country definition for POR #
##############################

province = { id = 335 anti_air = 1 } # Oporto
province =
{ id         = 336
  anti_air   = 4
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Lissabon
province =
{ id         = 983
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Bissão
province =
{ id         = 1090
  anti_air   = 2
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # São Tomé
province =
{ id         = 1094
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # Cabinda
province =
{ id         = 1101
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Benguella
province =
{ id         = 1123
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Inhambane
province =
{ id         = 1146
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Cap Verde Islands
province =
{ id         = 1316
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Macao
province =
{ id         = 1658
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # East Timor
province =
{ id         = 1867
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 4 current_size = 4 }
}              # The Azores

#####################
# Country main data #
#####################

country =
{ tag                    = POR
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 15
  consumer = 0.2111 
  supply = 0.0556 
  production = 0.7333 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 336
  manpower               = 69.5 # 70 - building queue
  transports             = 85
  escorts                = 7
  # Azores
  diplomacy =
  { relation = { tag = AUS value = 10 }
	relation = { tag = ALB value = 27 }
	relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
	relation = { tag = MAN value = 2 }
    relation = { tag = HUN value = 5 }
	relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 25 }
    relation = { tag = ITA value = 65 }
    relation = { tag = SAF value = 125 access = yes }
    relation = { tag = SPR value = -50 }
    relation = { tag = SIA value = 29 }
	relation = { tag = LIT value = 2 }
	relation = { tag = LAT value = 3 }
	relation = { tag = USA value = -4 }
	relation = { tag = IRQ value = 2 }
	relation = { tag = CAN value = 4 }
	relation = { tag = MEX value = -21 }
	relation = { tag = NOR value = -21 }
	relation = { tag = SWE value = -22}
	relation = { tag = LUX value = 0 }
	
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 4 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }
  nationalprovinces      = { 335 336 337 344 345 1867 }
  ownedprovinces         = { 335 336 337 344 345 983 1090 1094 1096 1097 1100 1101 1102 1103 1122 1123 1130 1131 1133 1138 1146 1316 1658 1867 }
  controlledprovinces    = { 335 336 337 344 345 983 1090 1094 1096 1097 1100 1101 1102 1103 1122 1123 1130 1131 1133 1138 1146 1316 1658 1867 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 1010 1110 1190 2010 2020 2150 2290 2300 2310 2450 2460 2510 3010 3020 3070 3400 3410 4010 4020 4120 5010 5080 5090 5190
                             6010 6020 8040 8050 9010
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 9001 }
  headofgovernment       = { type = 9 id = 9002 }
  foreignminister        = { type = 9 id = 9003 }
  armamentminister       = { type = 9 id = 9004 }
  ministerofsecurity     = { type = 9 id = 9005 }
  ministerofintelligence = { type = 9 id = 9006 }
  chiefofstaff           = { type = 9 id = 9007 }
  chiefofarmy            = { type = 9 id = 9008 }
  chiefofnavy            = { type = 9 id = 9009 }
  chiefofair             = { type = 9 id = 9010 }
  landunit =
  { id       = { type = 19600 id = 1000 }
    location = 336
    name     = "Exército do Portugal"
    division =
    { id       = { type = 19600 id = 1001 }
      name     = "1o Batalhão de Infantaria"
      type     = infantry
      extra    = artillery
      strength = 100
    }
    division =
    { id       = { type = 19600 id = 1002 }
      name     = "2o Batalhão de Infantaria"
      type     = infantry
      strength = 100
    }
  }
  navalunit =
  { id       = { type = 19600 id = 1003 }
    location = 336
    base     = 336
    name     = "Transporte de Navio do Portugal"
    division =
    { id   = { type = 19600 id = 1004 }
      name = "1o Flotilha de Navio de Transporte"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 19600 id = 1005 }
    location = 983
    base     = 983
    name     = "Transporte de Navio de Colonias"
    division =
    { id   = { type = 19600 id = 1006 }
      name = "2o Flotilha de Navio de Transporte"
      type = transport
    }
    division =
    { id    = { type = 19600 id = 1007 }
      name  = "Douro Flotilha"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 19600 id = 1008 }
    name     = "Marinha do Portugal"
    location = 336
    base     = 336
    division =
    { id       = { type = 19600 id = 1009 }
      name     = "Viana do Castello Flotilha"
      type     = destroyer
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 19600 id = 1010 }
      name     = "1o Flotilha de Submarino"
      type     = submarine
      model    = 1
      strength = 100
    }
  }
  airunit =
  { id       = { type = 19600 id = 1011 }
    name     = "Aéreo do Portugal"
    location = 336 # Lissabon
    base     = 336
    division =
    { id       = { type = 19600 id = 1012 }
      name     = "1o Avião de Bombardeiro Tático"
      type     = tactical_bomber
      strength = 100
      model    = 0
    }
  } 
	convoy = { 
		id = { type = 19600 id = 1013 } 
		istradeconvoy = no 
		transports = 15 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = no 
		supplies = no 
		path = { 1096 2277 2286 2287 2288 2580 2295 2594 2300 2593 2424 2426 336 } 
		} 
	province_development = { 
		id = { type = 19600 id = 1014 } 
		name = "" 
		progress = 0.0000 
		location = 336 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = july 
			day = 26 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2228 
		days_for_first = 114 
		gearing_bonus = 0.0000 
		speed_step = 2 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 19600 id = 1015 } 
		name = "" 
		progress = 0.0000 
		location = 335 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = september 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 26 
		done = 0 
		days = 2319 
		days_for_first = 114 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 19600 id = 1016 } 
		name = "" 
		progress = 0.0000 
		location = 337 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = may 
			day = 25 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 16 
		done = 0 
		days = 2319 
		days_for_first = 171 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 19600 id = 1017 } 
		name = "" 
		progress = 0.0000 
		location = 344 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = may 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 12 
		done = 0 
		days = 2590 
		days_for_first = 114 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 19600 id = 1018 } 
		name = "" 
		progress = 0.0000 
		location = 345 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = may 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 12 
		done = 0 
		days = 2590 
		days_for_first = 114 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
