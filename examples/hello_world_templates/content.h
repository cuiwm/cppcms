#ifndef CONTENT_H
#define CONTENT_H

#include <cppcms/view.h>
#include <string>

namespace content  {
	struct message : public cppcms::base_content {
		std::string message;
	};
}


#endif
