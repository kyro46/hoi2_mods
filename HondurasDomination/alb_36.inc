
##############################
# Country definition for ALB #
##############################

province =
{ id         = 390
  anti_air   = 1
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 2 current_size = 2 }
}              # Tirana

#####################
# Country main data #
#####################

country =
{ tag                    = ALB
  puppet                 = ITA
  manpower               = -20.1 # -20 - building queue
  transports             = 30
  escorts                = 3
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.4000 
  supply = 0.1000 
  production = 0.5000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 390
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 5
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 1
  }
  nationalprovinces      = { 390 391 413 415 }
  ownedprovinces         = { 390 391 }
  controlledprovinces    = { 390 391 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5080 6010 }
  diplomacy =
  { relation = { tag = AUS value = 3 }
    relation = { tag = ITA value = 10 }
    relation = { tag = GER value = 2}
    relation = { tag = HUN value = 4 }
    relation = { tag = FRA value = 4 }
    relation = { tag = ENG value = 1 }
	relation = { tag = LUX value = 4 }
	relation = { tag = POR value = 27 }
	relation = { tag = CZE value = -8 }
	relation = { tag = IRE value = -7 }
	relation = { tag = DEN value = -8 }
  }
  headofstate            = { type = 9 id = 32001 } # King Zog
  headofgovernment       = { type = 9 id = 32054 } # Mehdi Frashëri
  foreignminister        = { type = 9 id = 32003 } # Fuad Asllani
  armamentminister       = { type = 9 id = 32004 } # Rrok Gera
  ministerofsecurity     = { type = 9 id = 32228 } # Ethem Toto
  ministerofintelligence = { type = 9 id = 32226 } # Sami Koka
  chiefofstaff           = { type = 9 id = 32145 } # Xhemal Araniti
  chiefofarmy            = { type = 9 id = 32008 } # Shefki Shatku
  chiefofnavy            = { type = 9 id = 32009 } # Quamar Pakazi
  chiefofair             = { type = 9 id = 32188 } # Nexhip Deva
	province_development = { 
		id = { type = 30658 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 390 
		cost = 2.0000 
		date = { 
			year = 1953 
			month = june 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 275 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
