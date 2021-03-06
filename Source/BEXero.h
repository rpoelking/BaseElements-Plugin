//
//  BE_Xero.h
//  BaseElements
//
//  Created by Mark Banks on 14/01/2014.
//  Copyright (c) 2014 Goya. All rights reserved.
//

#ifndef __BaseElements__BE_Xero__
#define __BaseElements__BE_Xero__

#include "BEOAuth.h"



class BEXero : public BEOAuth {
	
public:
	
	explicit BEXero ( const std::string key, const std::string secret ) : BEOAuth ( key, secret ) { }
	
	int sign_url ( std::string& url, std::string& post_arguments, const std::string http_method );

};


#endif /* defined(__BaseElements__BE_Xero__) */
