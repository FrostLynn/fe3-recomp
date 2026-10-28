#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C205F8
// Address: 0x1c205f8 - 0x1c206b8
void sub_01C205F8_0x1c205f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C205F8_0x1c205f8");
#endif

    switch (ctx->pc) {
        case 0x1c2061cu: goto label_1c2061c;
        default: break;
    }

    ctx->pc = 0x1c205f8u;

    // 0x1c205f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c205f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c205fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c205fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c20600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c20600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c20604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c20608: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c20608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2060c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c2060cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20610: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c20610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c20614: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C20614u;
    SET_GPR_U32(ctx, 31, 0x1C2061Cu);
    ctx->pc = 0x1C20618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20614u;
    // 0x1c20618: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C20614u, 0x1C2061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2061Cu;
label_1c2061c:
    // 0x1c2061c: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1c2061cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c20620: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1c20620u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c20624: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1c20624u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c20628: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c20628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c2062c: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c2062cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c20630: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1c20630u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c20634: 0x8c4b00b0  lw          $t3, 0xB0($v0)
    ctx->pc = 0x1c20634u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c20638: 0xae2d0400  sw          $t5, 0x400($s1)
    ctx->pc = 0x1c20638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 13));
    // 0x1c2063c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c2063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20640: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c20640u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c20644: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c20644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c20648: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1c20648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c2064c: 0xe62003fc  swc1        $f0, 0x3FC($s1)
    ctx->pc = 0x1c2064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1020), bits); }
    // 0x1c20650: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x1c20650u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1c20654: 0x8d6d0010  lw          $t5, 0x10($t3)
    ctx->pc = 0x1c20654u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1c20658: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1c20658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2065c: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c2065cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c20660: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1c20660u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1c20664: 0x8e0c0010  lw          $t4, 0x10($s0)
    ctx->pc = 0x1c20664u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c20668: 0xae2f040c  sw          $t7, 0x40C($s1)
    ctx->pc = 0x1c20668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1036), GPR_U32(ctx, 15));
    // 0x1c2066c: 0xae2d03f8  sw          $t5, 0x3F8($s1)
    ctx->pc = 0x1c2066cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1016), GPR_U32(ctx, 13));
    // 0x1c20670: 0x8e0e0020  lw          $t6, 0x20($s0)
    ctx->pc = 0x1c20670u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c20674: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1c20674u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c20678: 0xae2e0410  sw          $t6, 0x410($s1)
    ctx->pc = 0x1c20678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1040), GPR_U32(ctx, 14));
    // 0x1c2067c: 0x25ef4610  addiu       $t7, $t7, 0x4610
    ctx->pc = 0x1c2067cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 17936));
    // 0x1c20680: 0xae2c0404  sw          $t4, 0x404($s1)
    ctx->pc = 0x1c20680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1028), GPR_U32(ctx, 12));
    // 0x1c20684: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1c20684u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c20688: 0xae2f03f0  sw          $t7, 0x3F0($s1)
    ctx->pc = 0x1c20688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 15));
    // 0x1c2068c: 0xae2e0414  sw          $t6, 0x414($s1)
    ctx->pc = 0x1c2068cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 14));
    // 0x1c20690: 0xe6200408  swc1        $f0, 0x408($s1)
    ctx->pc = 0x1c20690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1032), bits); }
    // 0x1c20694: 0x8e0e0028  lw          $t6, 0x28($s0)
    ctx->pc = 0x1c20694u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c20698: 0xae2b03f4  sw          $t3, 0x3F4($s1)
    ctx->pc = 0x1c20698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1012), GPR_U32(ctx, 11));
    // 0x1c2069c: 0xae2e0418  sw          $t6, 0x418($s1)
    ctx->pc = 0x1c2069cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 14));
    // 0x1c206a0: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1c206a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c206a4: 0xae2f041c  sw          $t7, 0x41C($s1)
    ctx->pc = 0x1c206a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 15));
    // 0x1c206a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c206a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c206ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c206acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c206b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C206B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C206B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C206B0u;
        // 0x1c206b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C206B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C206B8u;
}
