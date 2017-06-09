//
//  export.h
//  
//
//  Created by Paola Ducolin on 09/06/17.
//
//

#pragma once

#ifdef _MSC_VER	/* MSVC */
#ifdef BUILD_LIBRTMP
#define LIBRTMP_EXPORT __declspec(dllexport)
#else /* BUILD_LIBRTMP */
#define LIBRTMP_EXPORT __declspec(dllimport)
#endif /* BUILD_LIBRTMP */
#else /* MSVC */
#define LIBRTMP_EXPORT __attribute__((visibility("default")))
#endif /* MSVC */
