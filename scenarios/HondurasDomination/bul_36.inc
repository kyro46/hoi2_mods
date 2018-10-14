
##############################
# Country definition for BUL #
##############################

province = { id = 417 anti_air = 2 ic = 2 } # Sofia
province = { id = 420 ic = 2 } # Pleven
province =
{ id         = 422
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 5 current_size = 5 }
  ic         = 2
}              # Varna

#####################
# Country main data #
#####################

country =
{ tag                    = BUL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  consumer = 0.3455 
  supply = 0.1091 
  production = 0.5454 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 59.5 # 60 - building queue
  capital                = 417
  # navalunit = {
  # id = { type = 19000 id = 15 }
  # name = "Bulgarska Flota"
  # location = 422
  # base = 422
  # division = {
  # id = { type = 19000 id = 16 }
  # name = "1-va Podvodnikova flotilija"
  # type = destroyer
  # model = 0
  # }
  # }
  transports             = 20
  escorts                = 4
  diplomacy =
  { relation = { tag = ENG value = 20 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 25 }
    relation = { tag = GRE value = -75 }
    relation = { tag = ITA value = 150 }
    relation = { tag = ROM value = 25 }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 75 }
    relation = { tag = YUG value = 25 }
	relation = { tag = SCH value = -7 }
	relation = { tag = HUN value = 3}
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 1 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  nationalprovinces      = { 419 420 422 421 417 416 413 414 412 410 423 }
  ownedprovinces         = { 419 420 422 421 417 416 }
  controlledprovinces    = { 419 420 422 421 417 416 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6010 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 6
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 19001 }
  headofgovernment       = { type = 9 id = 19002 }
  foreignminister        = { type = 9 id = 19003 }
  armamentminister       = { type = 9 id = 19004 }
  ministerofsecurity     = { type = 9 id = 19005 }
  ministerofintelligence = { type = 9 id = 19006 }
  chiefofstaff           = { type = 9 id = 19007 }
  chiefofarmy            = { type = 9 id = 19008 }
  chiefofnavy            = { type = 9 id = 19009 }
  chiefofair             = { type = 9 id = 19010 }
  # Firepower
  landunit =
  { id       = { type = 19000 id = 1 }
    location = 417
    name     = "1-va Armija"
    division =
    { id       = { type = 19000 id = 2 }
      name     = "1-va Sofiiska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 3 }
      name     = "7-ma Rilska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 4 }
      name     = "1-va Konna divizija"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 19000 id = 5 }
    location = 422
    name     = "2-ra Armija"
    division =
    { id       = { type = 19000 id = 6 }
      name     = "2-ra Trakiiska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 7 }
      name     = "8-a Tundzhanska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 8 }
      name     = "2-ra Konna divizija"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 19000 id = 9 }
    location = 421
    name     = "3-ta Armija"
    division =
    { id       = { type = 19000 id = 10 }
      name     = "3-ta Balkanska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 11 }
      name     = "4-ta Preslavska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 19000 id = 12 }
    location = 420
    name     = "4-ta Armija"
    division =
    { id       = { type = 19000 id = 13 }
      name     = "5-ta Dunavska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 19000 id = 14 }
      name     = "6-ta Bdinska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
  } 
	province_development = { 
		id = { type = 19000 id = 15 } 
		name = "" 
		progress = 0.0000 
		location = 417 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = november 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2412 
		days_for_first = 262 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 19000 id = 16 } 
		name = "" 
		progress = 0.0000 
		location = 422 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = august 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2075 
		days_for_first = 157 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 19000 id = 17 } 
		name = "" 
		progress = 0.0000 
		location = 420 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = november 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2412 
		days_for_first = 262 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 19000 id = 18 } 
		name = "" 
		progress = 0.0000 
		location = 421 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = november 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2412 
		days_for_first = 262 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 19000 id = 19 } 
		name = "" 
		progress = 0.0000 
		location = 419 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = january 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 8 
		done = 0 
		days = 725 
		days_for_first = 262 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
