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

// Function: sub_01C77268
// Address: 0x1c77268 - 0x1c77300
void sub_01C77268_0x1c77268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77268_0x1c77268");
#endif

    switch (ctx->pc) {
        case 0x1c7728cu: goto label_1c7728c;
        default: break;
    }

    ctx->pc = 0x1c77268u;

    // 0x1c77268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7726c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7726cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c77270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c77274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c77278: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c77278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7727c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c7727cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77280: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c77280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c77284: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77284u;
    SET_GPR_U32(ctx, 31, 0x1C7728Cu);
    ctx->pc = 0x1C77288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77284u;
    // 0x1c77288: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77284u, 0x1C7728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7728Cu;
label_1c7728c:
    // 0x1c7728c: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1c7728cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c77290: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c77290u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c77294: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1c77294u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c77298: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c77298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c7729c: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1c7729cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c772a0: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1c772a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c772a4: 0x8c4a004c  lw          $t2, 0x4C($v0)
    ctx->pc = 0x1c772a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c772a8: 0xae2e05b0  sw          $t6, 0x5B0($s1)
    ctx->pc = 0x1c772a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 14));
    // 0x1c772ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c772acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c772b0: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c772b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c772b4: 0x8e0d0014  lw          $t5, 0x14($s0)
    ctx->pc = 0x1c772b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c772b8: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1c772b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1c772bc: 0x8d4e0084  lw          $t6, 0x84($t2)
    ctx->pc = 0x1c772bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x1c772c0: 0xae2d05b4  sw          $t5, 0x5B4($s1)
    ctx->pc = 0x1c772c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 13));
    // 0x1c772c4: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1c772c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1c772c8: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1c772c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c772cc: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1c772ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1c772d0: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1c772d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c772d4: 0xae2d05b8  sw          $t5, 0x5B8($s1)
    ctx->pc = 0x1c772d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 13));
    // 0x1c772d8: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x1c772d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1c772dc: 0xae2e05a0  sw          $t6, 0x5A0($s1)
    ctx->pc = 0x1c772dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 14));
    // 0x1c772e0: 0xae2f05a4  sw          $t7, 0x5A4($s1)
    ctx->pc = 0x1c772e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1444), GPR_U32(ctx, 15));
    // 0x1c772e4: 0x8e0f001c  lw          $t7, 0x1C($s0)
    ctx->pc = 0x1c772e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c772e8: 0xae2f05bc  sw          $t7, 0x5BC($s1)
    ctx->pc = 0x1c772e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 15));
    // 0x1c772ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c772ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c772f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c772f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c772f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C772F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C772F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C772F4u;
        // 0x1c772f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C772F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C772FCu;
    // 0x1c772fc: 0x0  nop
    ctx->pc = 0x1c772fcu;
    // NOP
    ctx->pc = 0x1c77300u;
}
