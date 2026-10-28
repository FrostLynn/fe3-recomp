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

// Function: sub_01C201D8
// Address: 0x1c201d8 - 0x1c202c0
void sub_01C201D8_0x1c201d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C201D8_0x1c201d8");
#endif

    switch (ctx->pc) {
        case 0x1c20208u: goto label_1c20208;
        case 0x1c20238u: goto label_1c20238;
        case 0x1c20248u: goto label_1c20248;
        case 0x1c20258u: goto label_1c20258;
        default: break;
    }

    ctx->pc = 0x1c201d8u;

    // 0x1c201d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c201d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c201dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c201dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c201e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c201e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c201e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c201e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c201e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c201e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c201ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c201ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c201f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c201f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c201f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c201f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c201f8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c201f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c201fc: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1c201fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c20200: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C20200u;
    SET_GPR_U32(ctx, 31, 0x1C20208u);
    ctx->pc = 0x1C20204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20200u;
    // 0x1c20204: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C20200u, 0x1C20208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20208u;
label_1c20208:
    // 0x1c20208: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c20208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c2020c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c2020cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c20210: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c20210u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c20214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20218: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1c20218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1c2021c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c2021cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c20220: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c20220u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c20224: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c20224u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c20228: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c20228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c2022c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c2022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c20230: 0xc707c46  jal         func_1C1F118
    ctx->pc = 0x1C20230u;
    SET_GPR_U32(ctx, 31, 0x1C20238u);
    ctx->pc = 0x1C20234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20230u;
    // 0x1c20234: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F118u, 0x1C20230u, 0x1C20238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20238u;
label_1c20238:
    // 0x1c20238: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c20238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c2023c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2023cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20240: 0xc707c46  jal         func_1C1F118
    ctx->pc = 0x1C20240u;
    SET_GPR_U32(ctx, 31, 0x1C20248u);
    ctx->pc = 0x1C20244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20240u;
    // 0x1c20244: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F118u, 0x1C20240u, 0x1C20248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20248u;
label_1c20248:
    // 0x1c20248: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c20248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c2024c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2024cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20250: 0xc707c4a  jal         func_1C1F128
    ctx->pc = 0x1C20250u;
    SET_GPR_U32(ctx, 31, 0x1C20258u);
    ctx->pc = 0x1C20254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20250u;
    // 0x1c20254: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F128u, 0x1C20250u, 0x1C20258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20258u;
label_1c20258:
    // 0x1c20258: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c20258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2025c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c2025cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c20260: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c20260u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c20264: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c20264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c20268: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c20268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c2026c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c2026cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c20270: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c20270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c20274: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1c20274u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c20278: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c20278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2027c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2027cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c20280: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c20280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c20284: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c20284u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c20288: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c20288u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c2028c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c2028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c20290: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1c20290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1c20294: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c20294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c20298: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1c20298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1c2029c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c2029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c202a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c202a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c202a4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c202a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c202a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c202a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c202ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c202acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c202b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c202b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c202b4: 0x8707c46  j           func_1C1F118
    ctx->pc = 0x1C202B4u;
    ctx->pc = 0x1C202B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C202B4u;
    // 0x1c202b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    sub_01C1F118_0x1c1f118(rdram, ctx, runtime); return;
    ctx->pc = 0x1C202BCu;
    // 0x1c202bc: 0x0  nop
    ctx->pc = 0x1c202bcu;
    // NOP
    ctx->pc = 0x1c202c0u;
}
