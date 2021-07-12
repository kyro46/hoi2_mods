
##############################
# Country definition for IRE #
##############################

province =
{ id         = 30
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 4 current_size = 4 }
}              # Dublin

#####################
# Country main data #
#####################

country =
{ tag                    = IRE
  manpower               = 28.6 # 30 - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.1674 
  supply = 0.0134 
  production = 0.8192 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 30
  transports             = 30
  escorts                = 5
  diplomacy =
  { relation = { tag = ARG value = 20 }
    relation = { tag = AST value = 75 }
    relation = { tag = AUS value = 10 }
    relation = { tag = BEL value = 75 }
    relation = { tag = BRA value = 20 }
    relation = { tag = CAN value = 75 }
    relation = { tag = ENG value = 25 }
    relation = { tag = ETH value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = GER value = 15 }
    relation = { tag = HOL value = 75 }
    relation = { tag = HUN value = 25 }
    relation = { tag = ITA value = 20 }
    relation = { tag = LUX value = 75 }
    relation = { tag = MEX value = 30 }
    relation = { tag = NZL value = 75 }
    relation = { tag = POR value = 25 }
    relation = { tag = POL value = -3 }
	relation = { tag = SAF value = 80 }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = 50 }
    relation = { tag = USA value = 75 }
	relation = { tag = DEN value = 3 }
	relation = { tag = SWE value = 2 }
	relation = { tag = CZE value = 3 }
	relation = { tag = NOR value = 3 }
	relation = { tag = ROM value = 1 }
	relation = { tag = ALB value = -8 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  nationalprovinces      = { 27 26 25 24 29 28 30 }
  ownedprovinces         = { 27 26 25 24 30 }
  controlledprovinces    = { 27 26 25 24 30 }
  # Western Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6010 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    freedom           = 8
    free_market       = 7
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 25001 }
  headofgovernment       = { type = 9 id = 25002 }
  foreignminister        = { type = 9 id = 25003 }
  armamentminister       = { type = 9 id = 25004 }
  ministerofsecurity     = { type = 9 id = 25005 }
  ministerofintelligence = { type = 9 id = 25006 }
  chiefofstaff           = { type = 9 id = 25007 }
  chiefofarmy            = { type = 9 id = 25008 }
  chiefofnavy            = { type = 9 id = 25009 }
  chiefofair             = { type = 9 id = 25010 }
  # Firepower
  landunit =
  { id       = { type = 21500 id = 1 }
    name     = "Regiment of Rifle"
    location = 30
    division =
    { id           = { type = 21500 id = 2 }
      name         = "1/2/3/4/5 Rifle Battalions"
      strength     = 50
      #max_strength = 50
      type         = infantry
    }
  }
  navalunit =
  { id       = { type = 21500 id = 3 }
    name     = "Irish Republic Navy"
    location = 30
    base     = 30
    # division = {
    # id = { type = 21500 id = 5 }
    # name = "1st Destroyer Flotilla"
    # type = destroyer
    # model = 0
    # }
    division =
    { id    = { type = 21500 id = 4 }
      name  = "1st Transport Flotilla"
      type  = transport
      model = 0
    }
  } 
	province_development = { 
		id = { type = 21500 id = 6 } 
		name = "" 
		progress = 0.0000 
		location = 30 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = july 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1531 
		days_for_first = 141 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 21500 id = 7 } 
		name = "" 
		progress = 0.0000 
		location = 24 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 21 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1531 
		days_for_first = 141 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 21500 id = 8 } 
		name = "" 
		progress = 0.0000 
		location = 26 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = april 
			day = 4 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1531 
		days_for_first = 94 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 21500 id = 9 } 
		name = "" 
		progress = 0.0000 
		location = 27 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 21 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1531 
		days_for_first = 141 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	convoy_development = { 
		id = { type = 21500 id = 10 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = december 
			day = 10 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 699 
		days_for_first = 83 
		gearing_bonus = 0.0000 
		type = transports 
		} 
}
